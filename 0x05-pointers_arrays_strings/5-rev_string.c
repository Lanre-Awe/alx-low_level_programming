#include "main.h"

/**
 * rev_string - reverses a string
 * @s: type char
 */

void rev_string(char *s)
{
	char rev;

	int a, b, c;

	b = 0;
	c = 0;

	while (s[b] != '\0')
	{
		b++;
	}

	c = b - 1;

	for (a = 0; a < b / 2; a++)
	{
		rev = s[a];
		s[a] = s[c];
		s[c--] = rev;
	}
}
