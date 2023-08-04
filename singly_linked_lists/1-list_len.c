#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - gets the number of nodes in a list
 * @h: singly linked list to print
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
    size_t count = 0;

    while (h != NULL) /*Check if !NULL*/
    {
        if (h->str != NULL)
        {
            count++;
        }
        h = h->next;
    }
    return (count);
}