#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements of a listint_t list.
 * @h: Head of the list.
 *
 * Return: The number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
