include "main.h"
#include <stdio.h>

/**
 * _puts - put a string
 * @str: the string to put
*/

void _puts(char *str)
{
	for (int i = 0; str[i] !='\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
