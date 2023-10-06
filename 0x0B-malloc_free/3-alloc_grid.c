#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - a function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: number of columns.
 * @height: number of rows.
 * Prototype: int **alloc_grid(int width, int height);
 * Return: a pointer to a 2 dimensional array of integers. NULL on failure.
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **) malloc(height * sizeof(int));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));
		if (grid[i] == NULL)
			return (NULL);

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
