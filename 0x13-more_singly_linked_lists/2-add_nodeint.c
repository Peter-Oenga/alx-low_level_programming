#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_nodeint - Adds node to start of list
 * @head:Pointer to pointer head of list
 * @n: Integer added to node
 *
 * Return: Address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node1;

	node1 = malloc(sizeof(listint_t));
	if (node1 == NULL)
	{
		return (NULL);
	}
	node1->n = n;
	node1->next = *head;
	*head = node1;
	return (node1);
}
