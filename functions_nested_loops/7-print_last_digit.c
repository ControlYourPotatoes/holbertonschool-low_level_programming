#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Compute absolute value
 * @n: variable
 *
 * Return: n = last digitbr
 */
int  print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar(n % 10 + '0');

	}
	else if (n = 0)
	{
		_putchar(n);
	}
		_putchar(n % 10)
		return (n % 10);
}
