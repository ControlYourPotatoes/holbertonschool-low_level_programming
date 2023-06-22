#include "main.h"
/**
 * print_alphabet_x10 - alphabet print
 *
 * Return: Always (Success)
 */

void print_alphabet_x10(void)
{
	char c;
	int count = 0;

	while (count <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
		_putchar('\n')
		count++;
	}
	_putchar('\n');
}
