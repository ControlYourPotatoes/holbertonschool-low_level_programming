#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position in the list
 * @h: pointer to the pointer of the first node in the list
 * @idx: index of the node where the new node should be inserted (starting from 0)
 * @n: data for the new node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int count = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Find the node at the specified index or the last node */
	while (current != NULL && count < idx)
	{
		current = current->next;
		count++;
	}

	/* If idx is out of range and not inserting at the end, return NULL */
	if (current == NULL && count < idx)
		return (NULL);

	/* If inserting at the end, use add_dnodeint_end function */
	if (current == NULL && count == idx)
		return (add_dnodeint_end(h, n));

	/* insert at current when idx is reached */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current->prev;
	new_node->next = current;

	if (current->prev != NULL)
		current->prev->next = new_node;

	current->prev = new_node; /*end*/

	return (new_node);
}
