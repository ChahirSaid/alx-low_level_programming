#include "main.h"
/**
 * swap_int - swaps the values of two integers
 *
 * @a: Pointer of a value
 * @b: Pointer of another value
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{

	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
