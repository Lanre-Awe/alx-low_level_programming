#include "main.h"

/**
 * jack_bauer - prints out every minutes of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i;

	for (i = 0; i < 24; i++)
	{
		int j;

		for (j = 0; j < 60; j++)
		{
			_putchar(i / 10 + 48);
			_putchar(i % 10 + 48);
			_putchar(':');
			_putchar(j / 10 + 48);
			_putchar(j % 10 + 48);
			_putchar('\n');
		}
	}
}
