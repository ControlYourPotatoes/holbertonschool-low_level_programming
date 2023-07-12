#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - 2 dimensional array of integers
 * @width: the array width
 * @height: the array height
 * Return: pointer to the allocated grid array or NULL if size 0
 */


int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)calloc(width, sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}

	return (grid);
}
