#include "lists.h"

/**
 * sum_listint - Calculates the sum of the lis
 * @head: A pointer to the head of the list.
 *
 * Return: the list
 */
int sum_listint(listint_t *head)
{
	int sum;
	
	
	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
