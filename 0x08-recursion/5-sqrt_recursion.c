#include "main.h"

int _sqrtnum_recursion(int n, int i);

/**
 * _sqrt_recursion - square root of a number
 * @n: type int
 * Return: type int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrtnum_recursion(n, 0));
}

/**
 * _sqrtnum_recursion - recurses
 * @n: type int
 * @i: type int
 * Return: type int
 */

int _sqrtnum_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
		return (i);
	return (_sqrtnum_recursion(n, i + 1));
}
