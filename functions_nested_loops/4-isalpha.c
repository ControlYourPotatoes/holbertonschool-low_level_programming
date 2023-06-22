#include "main.h"
#include <ctype.h>
/**
 * _isalpha - check if alpha
 * @c: variable
 *
 * Return: 1 (Lowercase) else 0 (False)
 */
int _isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

