#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints the half of the given string
 * @str: the string to print
 */

void puts_half(char *str)
{
	int i, n, middle;

	n = strlen(str);
	middle = (n - 1) / 2;
	for (i = middle + 1; i < n; i++)
		putchar(str[i]);
	putchar('\n');
}
