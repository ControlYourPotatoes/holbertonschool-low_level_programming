#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strstr - find a string in a string
 * @haystack: The source string
 * @needle: The string you are looking for
 * Return: Return pointer to the found string or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *temp;

		temp = haystack;
		while (*needle == *haystack)
		{
			haystack++, needle++;
		}
		if (*needle == '\0')
			return (temp);
		haystack++;
	}
	return (0);
}
