#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenate two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the number of characters to concatenate
 * Return: the concecrated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, i = 0;

	while (dest[dlen])
		dlen++;

	while (i < n && src[i])
	{
		dest[dlen] = src[i];
		dlen++;
		i++;
	}
	dest[dlen + n + 1] = '\0';
	return (dest);
}
