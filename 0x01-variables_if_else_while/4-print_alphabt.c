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
		if (ch == 'e')
			ch++;
		else if (ch == 'q')
			ch++;
		putchar(ch);

	}
	putchar('\n');
	return (0);
}
