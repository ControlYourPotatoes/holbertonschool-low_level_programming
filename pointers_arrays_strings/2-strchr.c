#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in the string
 * @s: the string
 * c: the character
 * Return: pointer to the location of the character
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
