#include "main.h"
#include <stdio.h>

/**
 * factorial - return factorial of a number
 * @n: number
 * Return: factorial of a number
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
