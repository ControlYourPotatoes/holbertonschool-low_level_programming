#include "lists.h"
/**
 *add_dnodeint_end - adds a new node in the end
 *@head: a pointer to head
 *@n: data to be stored
 *Return: new node address of null if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL) /* if failed to allocate memory  */
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		/* If the list is empty, make the new node the head */
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		/* Find the last node and move pointers */
		dlistint_t *last_node = *head;

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}

		last_node->next = new_node;
		new_node->prev = last_node;
	}

	return (new_node);
}
