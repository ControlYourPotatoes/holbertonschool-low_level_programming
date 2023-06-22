#include "main.h"
#include <ctype.h>
/**
 * print_last_digit - Compute absolute value
 * @n: variable
 *
 * Return: ss
 */
int  print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar ((n % 10) + '0');
	return (n % 10);
}
