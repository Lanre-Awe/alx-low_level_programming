#include <stdio.h>

/**
 * main - entry pint
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int ch, uc;

	for (ch = 'a'; ch <= 'z'; ch++;)
	{
		putchar(ch);
	}
	for (uc = 'A'; uc <= 'Z'; uc++;)
	{
		putchar(uc);
	}
	putchar('\n');
	return (0);
}
