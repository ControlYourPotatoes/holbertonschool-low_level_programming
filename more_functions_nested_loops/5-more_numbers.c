#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints numbers 0-14 x10
 *
 * Return: Always (Success)
 */

void more_numbers(void)
{
	char c;
	int count = 0;

	while (count <= 9)
	{
	for (c = '0'; c < 15; c++)
		{
		putchar(c);
		}
		_putchar('\n');
		count++;
	}
}
