#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * pop_listint - deletes the head node
 * @head: pointer to the first element
 *
 * Return: the data inside the elements
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;

	return (num);
}
