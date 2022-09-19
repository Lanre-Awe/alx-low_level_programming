#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a -type int
 * @b - type int
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
