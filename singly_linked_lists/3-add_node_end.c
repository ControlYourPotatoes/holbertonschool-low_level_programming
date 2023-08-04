#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 **add_node_end- adds a new node to the end of a list
 *@head: points to the begining of a list
 *@str: points to a constant string
 *Return: &(add) of new tail of NULL if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newTail;

	if (str == NULL)
		return (NULL);
	newTail = (list_t *)malloc(sizeof(list_t));
	if (newTail == NULL)
		return (NULL);
	newTail->str = strdup(str);
	if (newTail->str == NULL)
	{
		free(newTail);
		return (NULL);
	}
	newTail->len = strlen(str);
	newTail->next = NULL; /* Make sure the newTail points to NULL (end of the list). */
	if (*head == NULL)
	{
		/* If empty, make the newTail the head. */
		*head = newTail;
	}
	else
	{
		/* Traverse the list to last. */
		list_t *current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		/* Add the newTail after the last node. */
		current->next = newTail;
	}
	return (newTail); /* Return the address of the newTail node. */
}
