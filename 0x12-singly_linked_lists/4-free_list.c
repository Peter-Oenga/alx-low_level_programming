#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees list_t
 * @head: A pointer to list_t
 */
void free_list(list_t *head)
{
	list_t *p;

	while (head)
	{
		p = head->next;
		free(head->str);
		free(head);
		head = p;
	}
}
