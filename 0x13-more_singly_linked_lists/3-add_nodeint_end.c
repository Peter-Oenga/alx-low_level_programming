#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - Display integer orderly
 * @head:Pointer to the header pointer
 * @n:Integer to new pointer
 *
 *
 * Return: Address of new node(nodeA)
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodeA;
	listint_t *nodeB = *head;

	nodeA = malloc(sizeof(listint_t));
	if (nodeA == NULL)
	{
		return (NULL);
	}
	nodeA->n = n;
	nodeA->next = NULL;
	if (*head == NULL)
	{
		*head = nodeA;
	}
	else
	{
		while (nodeB->next != NULL)
		{
			nodeB = nodeB->next;
		}
	nodeB->next = nodeA;
	}
	return (nodeA);
}
