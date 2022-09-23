#include "main.h"

/**
 * rev_string - reverse array
 * @n: type char
 *
 * Return: 0 (always)
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char tmp;

	while (*(n + 1) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = tmp;
	}
}

/**
 * infinite_add - adds two number
 * @n1: type char
 * @n2: type char
 * @r: type char
 * @size_r: type int
 *
 * Return: pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ovf = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, tmp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= sire_r)
		return (0);
	while (j >= 0 || i >= 0 || ovf == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		tmp_tot = val1 + val2 + ovf;
		if (tmp_tot >= 10)
			ovf = 1;
		else
			ovf = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (tmp_tot % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
