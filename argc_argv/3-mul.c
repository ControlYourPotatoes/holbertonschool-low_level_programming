#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Print the name of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}

	int result = 1;

	for (i = 1; i < argc; i++)
	{
		int x = strtol(argv[i], NULL, 0);

		result = result * x;
	}
	printf("%d\n", result);
	return (0);
}
