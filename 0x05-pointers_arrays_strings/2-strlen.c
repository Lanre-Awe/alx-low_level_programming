#include "main.h"

/**
 * _strlen - gets the length of the string
 * @s: type char
 * Return: 0
 */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		++len;
	}

	return (len);
}
