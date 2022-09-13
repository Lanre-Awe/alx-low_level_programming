#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		int k;

		for (k = 0; k <= 9; k++)
		{
			j = i * k;
			if ((j / 10) > 0)
			{
				_putchar((j / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((j % 10) + '0');
			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
