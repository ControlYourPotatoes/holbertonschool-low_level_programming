#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse an array to n
 * @a: array to reverse
 * @n: number of elements to reverse
*/

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
