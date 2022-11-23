#include "main.h"

int _printf(const char *format, ...)
{
	va_list ap;
	int c_count;

	va_start(ap, format);

	c_count = _parser(format, f_list, ap);

	va_end(ap);

	return (c_count);
}
