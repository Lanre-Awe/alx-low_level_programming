#include <stdio.h>

/**
 * main - prints all argument it receives
 * @argc: number of argument
 * @argv: arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i])
		}
	}
	return (0);
}
