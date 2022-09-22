#include "main.h"

/**
 * reverse_array - reverses the content of the array
 * @a: type int
 * @n: type int
 */

void reverse_array(int *a, int n)
{
	int b, c, d;

	c = n - 1;

	for (b = 0; b < n / 2; b++)
	{
		d = a[b];
		a[b] = a[c];
		a[c--] = d;
	}
}
