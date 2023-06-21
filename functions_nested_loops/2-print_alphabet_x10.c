#include "main.h"
/**
 * print_alphabet - alphabet print
 *
 * Return: Always (Success)
 */

void print_alphabet_x10(void)
{
	char c;
	int count;

	while (count <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
		count++
	}
	_putchar('\n');
}
