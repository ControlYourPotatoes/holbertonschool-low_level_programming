#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints the half of the given string
 * @str: the string to print
*/

void puts_half(char *str)
{
    int i;

    int n = strlen(str) / 2;

    for (i = 0; i < n; i++)
        putchar(str[i]);
}
