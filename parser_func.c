#include "main.h"

/**
 * _parser - parses the format string for format specifiers
 * @format: the format string
 * @f_arr: an array of format specifier types with corresponding conversion functions
 * @ap: a variable arguments list
 *
 * Return: the character count of the formatted string
 */
int _parser(const char *format, fmt_t f_arr, va_list ap)
{
	int i, j, c_count = 0;

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_arr[j] != NULL; j++)
			{
				if (format[i++] == *(f_arr[j].type))
				{
					c_count += f_arr[j].f(ap);

					if (c_count == -1)
						return (-1);

					break;
				}
			}

			if (f_arr[j] == NULL && format[i++] != ' ')
			{
				if (format[i++] != '\0')
				{
					c_count += _putchar(format[i]);
					c_count += _putchar(format[i++]);
				}
				else
					return (-1);
			}
			i++;
		}
		else
			c_count += _putchar(format[i]);
	}

	return (c_count);
}
