#include "main.h"

/**
 * swap_int - Swap an integer
 * @a: First value to swap
 * @b: Second value to swap
 * Returns 0
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
