#include "main.h"
#include <stdio.h>

/**
 * main - prints its name
 * @argc: the number of arguments
 * @argv: an array of string containing the arguments
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
