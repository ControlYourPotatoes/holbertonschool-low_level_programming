#include "lists.h"
/**
 *delete_dnodeint_at_index- dele a node at a given location
 *@head: points to a pointer that points to head
 *@index: where we want to delet the node
 *Return: 1 if success or -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	/*Declarations*/
	dlistint_t *temp;
	unsigned int count = 0;

	/*check if where pointed is in null*/
	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next; /*Move head over*/
		if (*head != NULL)
			(*head)->prev = NULL; /*set to null if head is empty*/
		free(temp);
		return (1);
	}
	/*Move alon the list*/
	while (temp != NULL && count < index)
	{
		/*Move and add to count*/
		temp = temp->next;
		count++;
	}                              /*end while*/
	temp->prev->next = temp->next; /*set the prev node to look next to*/
	if (temp->next != NULL)
		temp->next->prev = temp->prev; /*set next node prev to */
	free(temp);
	return (1);
} /*end function*/
