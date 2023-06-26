#include "main.h"

/**
 * _strlen - the length of the string
 * @s: the string
 * Return: String lenth
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
