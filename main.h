#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct fmt - string format specifier struct
 * @ch: format specifier string
 * @f: function that converts and prints value
 * of variable corresponding with format specifier
 *
 * Description: user data type for
 * format specifier type and conversion function
 */
typedef struct fmt
{
	char  *ch;
	int (*f)(va_list);
} fmt_t

#endif
