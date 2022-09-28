#include "main.h"

/**
 * is_prime_number - returns i1 if prime number
 * @n: type int
 * Return: 1 if prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 1)
	{
		return (1);
	}
	if (n == 1)
	{
		return (0);
	}
	return (0);
}
