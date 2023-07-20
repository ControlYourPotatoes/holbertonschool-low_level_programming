#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - define function
 * @argc: count of arguments
 * @argv: pointer to array of pointers
 * Return: 0 on success, 98 on malformed arguments, 99 if no operator
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *operator = argv[2];

	int (*func)(int, int) = get_op_func(operator);

	if (func == NULL)
	{
		printf("Error\n");
		return (2);
	}

	int result = func(num1, num2);

	printf("%d\n", result);

	return (0);
}
