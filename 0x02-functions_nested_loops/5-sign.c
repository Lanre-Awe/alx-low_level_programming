#include "main.h"

/**
 * print_sign - prints + if n is greter than 0, 0 if n is 0 and - if n is less than 0
 * @n: type int character
 *
 * Return: 1, 0 and -1
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;

		_putchar('+');

		return (i);
	}
	else if (n == 0)
	{
		i = 0;

		_putchar('0');

		return (i);
	}
	else
	{
		i = -1;

		_putchar('-');

		return (i);
	}
}
