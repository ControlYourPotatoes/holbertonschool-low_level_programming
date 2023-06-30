#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_diagsums - print the sum of the two diagnoals in matrix
 * @a: matrix interger
 * @size: size of the square matrix
*/

void print_diagsums(int **a, int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				printf("%d ", a[i][j]);
			else
				printf("%d ", 0);
		}
		printf("\n");
	}
}
