#include <stdio.h>
#include "main.h"

/**
 * _strcpy - Copy string src to dest
 * @dest: string
 * @src: source string
 * Return: Dest
*/

char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
