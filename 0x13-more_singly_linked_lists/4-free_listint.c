#include "lists.h"
#include <stdlib.h>


/**
 * free_listint - Frees a list.
 * @head: A pointer to the head of list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
