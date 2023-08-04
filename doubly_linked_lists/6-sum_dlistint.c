#include "lists.h"

/**
 *sum_dlistint - sums the data of a int list
 *@head: points to a list
 *Return: the sum
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
