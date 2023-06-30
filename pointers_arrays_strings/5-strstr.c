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
	int i = 0, j = 0;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return (haystack + i);
		}
		else
		{
			j = 0;
			i++;
		}
	}
	return (NULL);
}

