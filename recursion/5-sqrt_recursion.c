#include <stdio.h>
#include "main.h"

/**
 * sqrt_help - Aditional funtion to make it recursively call
 * @a: The entry is equal to n, of the before function
 * @b: This is the sum
 *
 * Return: This is the result
 */
int sqrt_help(int a, int b)
{
	if (a == (b * b))
		return (b);
	else if ((b * b) > a)
		return (-1);
	else
		return (sqrt_help(a, b + 1));
}

/**
 * _sqrt_recursion - This is my first function
 * @n: This is my value
 *
 * Return: This is my result of the function sqrt_help
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (sqrt_help(n, 0));
}
