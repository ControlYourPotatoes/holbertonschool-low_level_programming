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
	char *temp;
	int i, n;

	temp = haystack;
	n = strlen(needle);

	while (*haystack != '\0')
	{
		for (i = 0; i < n; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (*needle == '\0')
			return (temp);
		haystack++;
	}
	return (0);
}
