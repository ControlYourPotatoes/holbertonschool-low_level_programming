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
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			int i = 0;

			while (needle[i] != '\0' && haystack[i] == needle[i])
			{
			i++;
			}

			if (needle[i] == '\0')
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
