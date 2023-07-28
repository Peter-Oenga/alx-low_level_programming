#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a node at the end of a list.
 * @head: A pointer the head of the  list.
 * @str: String to be added to the list.
 * Return: If the function fails - NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dp;
	int len;
	list_t *last, *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dp = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dp;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
