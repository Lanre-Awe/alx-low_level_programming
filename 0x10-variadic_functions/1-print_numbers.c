#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers,
 * followed by a new line
 * @separator: string to be prijnted between numbers
 * @n: the number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	for (i = 0; i != n; i = va_arg(ap, unsigned int))
	{
		if (*separator == NULL)
			return (-1);
		printf("%u""%c", i , *separator);
	}
	va_end(ap);
	_putchar("\n");
}
