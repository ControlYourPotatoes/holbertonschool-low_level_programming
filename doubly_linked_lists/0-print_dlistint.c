#include "lists.h"
#include <stdio.h>

/**
 *print_dlistint - print the contents of a list
 *@h: points to the first node of a dlist
 *Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
