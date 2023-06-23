#include "main.h"
#include <stdio.h>
/**
 * _isupper - Check Upper
 * @c: variable
 * Return: Always (Success)
 */

int _isupper(int c)
{
	if (c < 91 && c > 64)
		return (1);
	else
		return (0);
}



