#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - X to the power of Y
 * @x: base value
 * @y: power of
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y % 2 == 0)
		return (_pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
	else
		return (x * _pow_recursion(x, y - 1));
}
