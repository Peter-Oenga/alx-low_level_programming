#include "lists.h"
#include <stdlib.h>

/**
  * insert_nodeint_at_index - function that inserts new node
  * @head: the head of the lists
  * @idx: is the index of the list
  * @n: the variable to store the new node inserted
  * Return: the address of the new node, or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nodeA, *current = *head;
	unsigned int a;

	nodeA = malloc(sizeof(listint_t));

	if (nodeA == NULL)
		return (NULL);
	nodeA->n = n;

	if (idx == 0)
	{
		nodeA->next = current;
		*head = nodeA;
		return (nodeA);
	}
	for (a = 0; a < (idx - 1); a++)
	{
		if (current == NULL || current->next == NULL)
			return (NULL);
		current = current->next;
	}
	nodeA->next = current->next;
	current->next = nodeA;
	return (nodeA);
}
