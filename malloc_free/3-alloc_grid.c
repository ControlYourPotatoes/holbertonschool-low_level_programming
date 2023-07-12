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


int **alloc_grid(int width, int height) {
	if (width <= 0 || height <= 0) {
		return NULL;
	}

	int **grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL) {
		return NULL;
	}

	int i, j;
	int **temp = grid;

	for (i = 0; i < height; i++) {
		*grid = (int *)calloc(width, sizeof(int));
		if (*grid == NULL) {
			for (j = 0; j < i; j++) {
				free(temp[j]);
			}
			free(temp);
			return NULL;
		}
		grid++;
	}

	return temp;
}
