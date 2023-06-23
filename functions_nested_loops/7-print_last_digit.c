#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Compute absolute value
 * @a: variable
 *
 * Return: n = last digitbr
 */
int  print_last_digit(int a)
{
	char b;

	if (a >= 0)
		b = (a % 10);
	else if (a < 0)
		b = -(a % 10);
	_putchar(b + '0');

	return (b);
}
