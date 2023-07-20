#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - excute function given an array
 * @array: the array of parameters
 * @size: the size of the array
 * @action: the function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL || size == 0)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
