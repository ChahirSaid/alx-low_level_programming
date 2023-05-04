#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: variable pointer
 *
 * Return: the converted number, else 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
	int j, i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	number = 0;
	for (j = 0; b[j] != '\0'; j++)
	{
		number = number << 1;

		if (b[j] == '1')
			number = number + 1;
	}
	return (number);
}
