#include "main.h"

/**
 * _islower - prints 1 if c is lowercased or 0 otherwise
 *
 * @c: first parameter
 * Return: 1 or 0
 */
int _islower(int c)
{
	int i;

	if (c >= 'a' && c <= 'z')
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
