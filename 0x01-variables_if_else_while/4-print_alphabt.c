#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q')
			ch;
		else if (ch == 'e')
			ch;
		putchar(ch);

	}
	putchar('\n');
	return (0);
}
