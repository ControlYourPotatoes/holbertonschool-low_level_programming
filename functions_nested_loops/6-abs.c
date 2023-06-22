#include "main.h"
#include <ctype.h>
/**
 * _abs - Compute absolute value
 * @n: variable
 *
 * Return: Absolute Value
 */
int _abs(int n)
{
	int absolute;

	if (n < 0)
	{
		absolute = n * (-1);
	}
	else
		absolute = n;
	return (absolute);
}
