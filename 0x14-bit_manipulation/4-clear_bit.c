#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: pointer
* @index: the index
*
* Return: 1 (success) else -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);

}

