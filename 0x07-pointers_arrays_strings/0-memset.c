#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: type char
 * @b: type char
 * @n: type b
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
