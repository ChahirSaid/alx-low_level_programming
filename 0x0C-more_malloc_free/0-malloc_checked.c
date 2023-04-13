#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: argument
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{

int *p;


	p = malloc(b);

	if (!p)
	{

		exit(98);
	}

	return (p);
}
