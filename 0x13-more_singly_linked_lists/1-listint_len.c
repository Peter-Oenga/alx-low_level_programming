#include "lists.h"
/**
 * listint_len - Total number of nodes
 * @h: A pointer to head
 *
 *
 *Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count;


	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
