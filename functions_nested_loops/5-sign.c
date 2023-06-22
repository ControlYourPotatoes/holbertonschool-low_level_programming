#include "main.h"
#include <ctype.h>
/**
 * print_sign - check if lowercase
 * @n: variable
 *
 * Return: 1 = possitive, 0 = Zero, -1 = negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (2);
}

