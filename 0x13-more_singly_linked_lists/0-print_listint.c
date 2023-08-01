#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Prints the elements of a list
 * @h: Pointer to the head
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
