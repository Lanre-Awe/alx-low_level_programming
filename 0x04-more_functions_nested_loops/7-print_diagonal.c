#include "main.h"

/**
 * print_diagonal - prints diagonal line in terminal
 * @n: type int
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int j;

		for (j = 1; j <= n; j++)
		{
			int k;

			for (k = 1; k <= n; k++)
			{
				if (k == j)
					_putchar('\\');
				else if (k < j)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
