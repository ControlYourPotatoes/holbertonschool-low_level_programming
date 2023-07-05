include <stdio.h>
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
	int i, x;
	int result = 1;

	for (i = 0; i < argc; i++)
	{
	}

	for (i = 1; i < argc; i++)
	{
		x = strtol(argv[i], NULL, 0);
		result = result * x;
	}
	if (argc >= 3)
	{
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
