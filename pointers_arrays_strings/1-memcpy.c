#include <stdio.h>
#include "main.h"

/**
 * _memcpy - Copy memory area
 * @dest: destination copy area
 * @src: source copy area
 * @n: number of bytes to copy
 * Return: pointer to destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
