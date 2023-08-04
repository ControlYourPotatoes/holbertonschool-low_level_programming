#include "lists.h"
/**
 *dlistint_len - retunr the lenght of the dlist
 *@h: points to the first node of the list
 *Return: the size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t Lengh = 0;

    while (h != NULL)
    {
        h = h->next;
        Lengh++;
    }
    return (Lengh);
}