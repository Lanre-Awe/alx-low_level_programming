#include "main.h"

/**
 * _strncat - similar to _strcat
 * @dest: type char
 * @src: type char
 * @n:type int
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	dest[a] = '\0';

	return (dest)
}

