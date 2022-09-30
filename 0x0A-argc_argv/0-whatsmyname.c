#include "main.h"
#include <stdio.h>


/**
 * main - prints its name
 * @argc: the number of arguments
 * @argv: an array of string containing the arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc >= 0)
	{
		for (i = 0; i < argc; i++)
		{
			if (i = 0)
			{
				_putchar(*argv[i]);
				_putchar('\n');
			}
		}
	}

	return (0);
}
