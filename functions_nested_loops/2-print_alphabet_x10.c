#include "main.h"
/**
 * print_alphabet - alphabet print
 *
 * Return: Always (Success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
