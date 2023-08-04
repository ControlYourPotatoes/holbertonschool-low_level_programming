#include "lists.h"

/*
 * sum_dlistint - Sums all values in the list
 * Return: Result of sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
