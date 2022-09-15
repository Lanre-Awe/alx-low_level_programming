#include "main.h"

/**
 * more_numbers - prints numbers ten times
 * Return: void
 */

void more_numbers(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		int j;
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
