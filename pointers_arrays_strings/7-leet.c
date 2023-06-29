#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * leet - replace aeotl for 43071 respectively
 * @str: the string to replace
 * Return: the string replaced
*/

char *leet(char *str)
{
	size_t length = strlen(str);
	char checkLetters[] = {'A', 'E', 'O', 'T', 'L'};
	char replaceLetters[] = {'4', '3', '0', '7', '1'};
	size_t i, j;

	for (i = 0; i < length; i++)
	{
		char current = str[i];

		for (j = 0; j < sizeof(checkLetters); j++)
		{
			if (current == checkLetters[j] || current == (checkLetters[j] + 32))
			{
				str[i] = replaceLetters[j];
				break;
			}
		}
	}
	return (str);
}
