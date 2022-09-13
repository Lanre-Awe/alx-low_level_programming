#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{

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
			if (k < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
