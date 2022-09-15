#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: type int
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}else
	{
		int j;

		for (j = 1; j <= n; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
