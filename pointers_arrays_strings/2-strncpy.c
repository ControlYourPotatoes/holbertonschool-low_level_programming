#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy a string to n
 * @dest: destination string
 * @n: the number to copy
 * @src: the string to copy
 * Return: the destination string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
