#include "function_pointers.h"
/**
*array_iterator - execute functions
*@array: the array
*@size: size of thearray
*@action: pointer to functions
*Return: void.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
