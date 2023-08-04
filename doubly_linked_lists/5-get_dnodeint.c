#include "lists.h"

/**
 **get_dnodeint_at_index - return a specific node
 *@head: points to the head of a list
 *@index: node to retive
 *Return: the node or null if not found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *current = head;
    unsigned int count = 0;

    while (current != NULL)
    {
        if (count == index) /* if node is found*/
        {
            return (current);
        }
        current = current->next;
        count++;
    }
    /* Node at the specified index does not exist */
    return (NULL);
}