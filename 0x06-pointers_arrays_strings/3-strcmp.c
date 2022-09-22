#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: type char
 * @s2: type char
 * Return: less than zero, zero if equal, greater than zero
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
