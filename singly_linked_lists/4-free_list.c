#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the memory of a list.
 * @head: pointer to a list.
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
