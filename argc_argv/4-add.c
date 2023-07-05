#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main- Sums the arguments
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *endptr;
		long num = strtol(argv[i], &endptr, 10);

		if (*endptr != '\0' || num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
