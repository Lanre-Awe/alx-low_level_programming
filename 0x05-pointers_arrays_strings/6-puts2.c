#include "main.h"

/**
 * puts2 - prints every other caharcter
 * @str: type char
 */

void puts2(char *str)
{
	int len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;

		if (len % 2 == 0)
		{
			len++;
		}
		else
		{
			_putchar(str[len]);
		}
	}

	_putchar('\n');
}
