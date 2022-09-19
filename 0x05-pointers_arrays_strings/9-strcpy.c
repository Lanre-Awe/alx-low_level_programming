#include "main.h"

/**
 * *_strcpy - copy parameters
 * @dest: type char
 * @src: type char
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, a;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (a = 0; a < len; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
