#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals
 * @a: type int
 * @size: type int
 */

void print_diagsums(int *a, int size)
{
	int i;

	unsigned int add, added;

	add = 0;
	added = 0;

	for (i = 0; i < size; i++)
	{
		add += a[(size * i) + i];
		added = a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", add, added);
}
