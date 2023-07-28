#include "lists.h"

/**
 * list_len - Number of elements in a linked list.
 * @h: The linked list.
 * Return: Number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t n;
	n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
