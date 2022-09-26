#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches for a string
 * @s: type char
 * @accept: type char
 *
 * Return: pointers to bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; *s != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (*s == accept[b])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
