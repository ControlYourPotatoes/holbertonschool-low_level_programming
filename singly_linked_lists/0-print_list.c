#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: singly linked list to print
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
    size_t count = 0; /* counts number of elements */

    while (h != NULL) /* checks  if struck has data*/
    {
        if (h->str != NULL) /*checks if str id null if true return [0] (nil) else print it*/
            printf("[%d] %s\n", h->len, h->str);

        else
            printf("[0] (nil)\n");

        h = h->next; /* goes to the next entry*/
        count++;     /* adds 1 */
    }
    return (count);
}