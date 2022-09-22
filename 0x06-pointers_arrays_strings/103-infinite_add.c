#include "main.h"

char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);


/**
 * add_strings - add two numbers
 * @n1: type char
 * @n2: type char
 * @r: type char
 * @r_index: type int
 * 
 * Return: if r cannot store (0)
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int i, j;

	j = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		i = (*n1 - '0') + (*n2 - '0');
		i += j;
		*(r + r_index) = (i % 10) + '0';
		j = i / 10;
	}

	for (; *n1; n1--, r_index--)
	{
		i = (*n1 - '0') + j;
		*(r + r_index) = (i % 10) + '0';
		j = i / 10;
	}

	for (; *n2; n2--, r_index--)
	{
		i = (*n2 - '0') + j;
		*(r + r_index) = (i % 10) + '0';
		j = i / 10;
	}

	if (j && r_index >= 0)
	{
		*(r + r_index) = (j % 10) + '0';
		return (r + r_index);
	}
	else if (j && r_index < 0)
		return (0);
	return (r + r_index + 1);
}

/**
 * infinite_add - add two numbers
 * @n: type char
 * @n2: type char
 * @r: type char
 * @size_r: type int
 *
 * Return: if r cannot store 0
 *
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index, n1_len = 0, n2_len = 0;

	for (index = 0; *(n1 + index); index++)
		n1_len++;

	for (index = 0; *(n2 + index); index++)
		n2_len++;
	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
		return (0);

	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
