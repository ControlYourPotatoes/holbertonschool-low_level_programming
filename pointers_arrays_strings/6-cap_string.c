#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * cap_string - Capitalizes words in a string
 * @str: the string to capitalize
 * Return: string with capitalized words
 */

char *cap_string(char *str)
{
	const char *separators = " \t\n,;.!?\"(){}";

	int capitalize = 1, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (strchr(separators, str[i]) != NULL)
		{
			capitalize = 1;
		}
		else if (capitalize)
		{
			str[i] = toupper(str[i]);
			capitalize = 0;
		}
	}

	return (str);
}
