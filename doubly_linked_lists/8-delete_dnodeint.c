#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * @head: pointer to the pointer of the first node
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1); /* If the list is empty, failed to delete */
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	/* Find the node at the specified index */
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (current == NULL && count < index) /* If idx is out of range, fails */
		return (-1);
	/* If deleting the last node, remove it and update the previous node */
	if (current == NULL && count == index - 1)
	{
		current = (*head)->prev;
		current->next = NULL;
		free(*head);
		*head = current;
		return (1);
	}
	/* If deleting a node in the middle,and free the node */
	if (current != NULL && count == index)
	{
		current->prev->next = current->next;
		if (current->next != NULL)
			current->next->prev = current->prev;
		free(current);
		return (1);
	}
	return (-1); /* Failed to delete the node at index */
}
