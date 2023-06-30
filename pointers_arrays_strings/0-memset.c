#include <stdio.h>
#include "main.h"

/**
 * _memset - Fill memory with constant byte
 * @s: pointer to memory area to fill
 * @n: number of bytes to fill
 * @b: constant byte to fill
 * Return: pointer to memory area to fill
 */

void *_memset(void *s, char b, unsigned int n)
{
	unsigned char *p = s;

	while (n--)
		*p++ = (unsigned char)b;
	return (s);
}
