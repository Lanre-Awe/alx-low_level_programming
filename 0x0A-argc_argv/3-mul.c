#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguement
 * @argv: arguments
 * Return: error , 1 or 0
 */

int main(int argc, char *argv[])
{
	int j = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	for (int i = 1; i <= argc; i++)
	{
		j *= argv[i];
	}
	return (0);
}
