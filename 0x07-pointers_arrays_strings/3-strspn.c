#include "main.h"

/**
 * *_strspn - get the length of prefix substring
 * @s: type char
 * @accept: type char
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, l;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		l = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				l = 1;
			}
		}
		if (l == 0)
		{
			return (k);
		}
	}
	return (0);
}
