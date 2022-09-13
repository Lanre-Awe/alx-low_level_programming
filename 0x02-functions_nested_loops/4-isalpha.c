#include "main.h"

/**
 * _isalpha - prints 1 if an alphabet is passed 0 if otherwise
 *
 * @c: first parameter
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	int i;

	if (c >= 'a' || c <= 'A' && c >= 'z' || c = 'Z')
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
