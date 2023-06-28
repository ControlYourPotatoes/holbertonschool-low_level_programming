#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_array - prints the elements of an array
 * @a: array to print
 * @n: number of elements
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}
