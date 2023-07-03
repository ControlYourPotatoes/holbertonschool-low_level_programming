#include <stdio.h>
#include "main.h"

/**
 * _puts_rev_recursion - puts a string in reverse with recursion
 * @s: the string to reverse
 */

void _puts_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_rev_recursion(s + 1);
		putchar(*s);
	}
}
