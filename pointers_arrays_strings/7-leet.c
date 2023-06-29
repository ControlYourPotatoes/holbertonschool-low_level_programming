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
	int length = strlen(str);
	int i;
	char current;

	for (i = 0; i < length; i++)
	{
		current = str[i];

		if (current == 'a' || current == 'A')
		{
			str[i] = '4';
		}
		else if (current == 'e' || current == 'E')
		{
			str[i] = '3';
		}
		else if (current == 'o' || current == 'O')
		{
			str[i] = '0';
		}
		else if (current == 't' || current == 'T')
		{
			str[i] = '7';
		}
		else if (current == 'l' || current == 'L')
		{
			str[i] = '1';
		}
	}
	return (str);
}
