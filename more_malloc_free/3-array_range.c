#include <stdlib.h>
#include "main.h"

/**
 * array_range - array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: array of integers or NULL if fails
 */

int *array_range(int min, int max)
{
	int i;
	int size;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	array = (int *)malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
	{
		array[i] = min;
	}

	return (array);
}
