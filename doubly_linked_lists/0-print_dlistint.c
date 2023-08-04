#include "lists.h"
#include <stdio.h>

size_t print_dlistint(const dlistint_t *h) {
	size_t node_count = 0;

	while (h != NULL) {
		printf("%d\n ", h->n);
		h = h->next;
		node_count++;
	}

	printf("\n");
	return node_count;
}
