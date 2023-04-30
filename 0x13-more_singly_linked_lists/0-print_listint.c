#include "lists.h"

/**
 * print_listint - display all ,the elements of the list.
 * @h: headss of list.
 *
 * Return: numero de node.
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}

	return (count);
}
