#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string
 *
 */

void rev_string(char *s)
{
	int length;
	char *start, *end;
	char temp;

	length = _strlen(s);
	start = s;
	end = s + length - 1;

	for (; start < end; start++, end--)
	{
		temp = *start;
		*start = *end;
		*end = temp;
	}
}
