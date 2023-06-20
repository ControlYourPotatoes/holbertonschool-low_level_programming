#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the alphabet in lowercase
 *
 * Return: Always (Success)
 */

int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
