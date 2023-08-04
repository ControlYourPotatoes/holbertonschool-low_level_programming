#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: singly linked list to print
 * Return: number of nodes in the list
 */
size_t print_list(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL) /*checks if null*/
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		count++;
	}
	return (count);
}
