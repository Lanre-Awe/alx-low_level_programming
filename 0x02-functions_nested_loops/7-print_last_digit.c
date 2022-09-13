#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @i: type int
 *
 * Return: value of the last digit
 */
int print_last_digit(int i)
{
	int n;

	if (i < 0)
	{
		n = (i % 10) * -1;
		_putchar(n + '0');
		return (n);
	}
	else
	{
		n = i % 10;
		_putchar(n + '0');
		return (n);
	}
}
