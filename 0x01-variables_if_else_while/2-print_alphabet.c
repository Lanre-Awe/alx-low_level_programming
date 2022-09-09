#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char c = 'a';
	while (c < 'z') {
		putchar(c);
		c++;
	}
	return (0);
}
