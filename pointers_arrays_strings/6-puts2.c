#include "main.h"
#include <string.h>

/**
 * puts2 - Prints every other character
 * @str: the string to print
*/

void puts2(char *str)
{
	int i = 0;

		for (; i < _strlen(str); i += 1)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
}

