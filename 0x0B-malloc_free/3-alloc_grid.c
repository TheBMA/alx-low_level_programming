#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers.
 * Each element of the grid should be initialized to 0.
 * @width: 1st array of integers. (number of columns)
 * @height: 2nd array of integers. (number of rows)
 * Prototype: int **alloc_grid(int width, int height);
 * Return: a pointer to a 2 dimensional array of integers.
 * Returns NULL on failure, or if width or height is 0 or negative.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(width * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i <= width; i++)
	{
		grid[i] = malloc(height * sizeof(int));

		if (grid == NULL)
			return (NULL);

		for (j = 0; j < height; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
