#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: takes numbeer of arguement
 * @argv: takes the argument in string
 * Return: always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
