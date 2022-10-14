#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all  a function that returns the sum of all its parameters
 * @n: a constant of type unsigned int
 * @...: ellipsis
 * Return: sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int i, sum;

	va_start(ap, n);

	for (i = n; i >= 0; i = va_arg(ap, unsigned int))
	{
		if (i == 0)
		{
			return (0);
		}
		sum += i;
	}
	va_end(ap);

	return (sum);
}
