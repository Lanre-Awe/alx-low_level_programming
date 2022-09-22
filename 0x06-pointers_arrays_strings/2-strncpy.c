#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: type char
 * @src: type char
 * @n : type int
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (dest[a] != '\0')
		a++;
	src = dest[a];

	return (0);
}
