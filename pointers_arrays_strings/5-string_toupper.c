#include <stdio.h>
#include "main.h"

/**
 * string_toupper - change all lower case to upper case
 * @str: string
 * Return: string with upper case
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
