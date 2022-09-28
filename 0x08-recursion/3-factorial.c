#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: type int
 * Return: type int
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
