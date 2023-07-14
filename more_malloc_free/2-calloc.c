#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocate memory for the given array
 * @nmemb: array
 * @size: number of bytes to allocate
 * Return: Null if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	size_t total_size;
	void *ptr;
	char *char_ptr;

	/* Check if nmemb or size is 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Check overflow */
	if (nmemb > (unsigned int)(-1) / size)
		return (NULL);

	/* Calculate the total size */
	total_size = (size_t)nmemb * size;

	/* Alocate memory */
	ptr = malloc(total_size);

	if (ptr != NULL)
	{
		/* Set the allocated memory to zero */
		char_ptr = (char *)ptr;
		for (i = 0; i < total_size; i++)
		{
			char_ptr[i] = 0;
		}
	}

	return (ptr);
}
