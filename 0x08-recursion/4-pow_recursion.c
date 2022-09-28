#include "main.h"

/**
 * _pow_recursion - returns value x raised to y
 * @x: type int
 * @y: type int
 * Return: type int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
