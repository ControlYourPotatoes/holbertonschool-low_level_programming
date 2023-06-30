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
	int sum1 = 0;
	int sum2 = 0;
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += a[i][j];
			}
			if (i + j == size - 1)
			{
				sum2 += a[i][j];
			}
		}
	}
}
