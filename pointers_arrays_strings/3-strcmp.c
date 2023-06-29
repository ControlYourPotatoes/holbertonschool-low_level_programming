#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare two strings
 * @s1: the string to compare
 * @s2: the string to compare
 * Return: the difference between
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
