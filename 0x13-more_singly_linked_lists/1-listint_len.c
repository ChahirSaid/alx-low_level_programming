#include "lists.h"

/**
 * listint_len - returns the numbee in nodess
 *
 * @h: headsss of a list in nodess
 *
 * Return: numbers of nodess.
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			count++;
		}
	}

	return (count);
}
