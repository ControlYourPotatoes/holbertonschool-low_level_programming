#include "main.h"
#include <ctype.h>
/**
 * _islower - check if lowercase
 * @c: variable
 *
 * Return: 1 (Lowercase) else 0 (False)
 */
int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

