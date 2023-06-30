#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * set_string - set the value of string to char
 * @s: pointer of pointer
 * @to: char to point
 */

void set_string(char **s, char *to)
{
	*s = to;
}
