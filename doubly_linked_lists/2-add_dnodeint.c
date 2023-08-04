#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 **add_dnodeint - adds a new node
 *@head: points to the First of the list
 *@n: holds an int value
 *Return: address of new node or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL) /* if empty */
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;
	return (new_node);
}
