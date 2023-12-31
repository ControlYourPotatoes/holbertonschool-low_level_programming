#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup -returns a pointer to allocated space in memory
 * @str: the string
 * Return: pointer to allocated space or NULL on failure
 */

char *_strdup(char *str)
{
	size_t len;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	duplicate = (char *)malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);

	return (duplicate);
}
