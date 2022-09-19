#include "main.h"
#include <stdio.h>

/**
 * print_array - prints rray
 * @a: type int
 * @n: type int
 */

void print_array(int *a, int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		if (len == 0)
			printf("%d", a[len]);
		else
			printf(", %d", a[len]);
	}

	printf("\n");
}
