#include "main.h"

int _printf(const char *format, ...)
{
	va_list ap;
	int c_count;
	fmt_t f_arr[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_decimal},
		{"i", print_int},
		{"r", print_rev},
		{"b", print_bin},
		{"R", rot13},
		{"u", print_uint},
		{"o", print_octal},
		{"x", print_lhex},
		{"X", print_uhex},
		{NULL, NULL}
	}

	va_start(ap, format);

	c_count = _parser(format, f_arr, ap);

	va_end(ap);

	return (c_count);
}
