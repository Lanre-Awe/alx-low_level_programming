#include <stdio.h>

/**
 * main -entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int x, y, z;
	
	y = 1024;
	z = 0;

	for (x = 0; x < y; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			z += x;
		}
		else
		{
			continue;
		}
	}
	printf("%d", z);
	printf("\n");

	return(0);
}
	
