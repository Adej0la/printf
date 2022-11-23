#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct fmt
{
	char *;
	int (*f)(va_list);
} fmt_t

#endif
