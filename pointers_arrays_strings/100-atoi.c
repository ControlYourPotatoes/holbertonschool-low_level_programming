#include <stdio.h>
#include "main.h"

/**
 * _atoi - Convert a string to integer
 * @s: the string to convert
 * Return: Result
*/

int _atoi(char *s)
{
	int n = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		n = n * 10 + s[i] - '0';
		i++;
	}
	return (n * sign);
}
