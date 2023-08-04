#include <stdlib.h>
#include <string.h>
#include "list.h"

/* Adds a new node at the end of a list_t list */
list_t *add_node_end(list_t **head, const char *str)
{
    if (str == NULL)
        return NULL;

    list_t *newTail = (list_t *)malloc(sizeof(list_t));
    if (newTail == NULL)
        return NULL;

    newTail->str = strdup(str);
    if (newTail->str == NULL)
    {
        free(newTail);
        return NULL;
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