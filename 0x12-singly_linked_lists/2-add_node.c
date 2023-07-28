#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t
 * @head: A pointer to the head of the list.
 * @str: String to be added to the list.
 * Return: NULL, If the function fails
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dpu;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dpu = strdup(str);
	if (dpu == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dpu;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
