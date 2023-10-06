#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional
 * grid created by alloc_grid function.
 * @grid: array of pointers to ints.
 * @height: number of pointers to ints.
 * Prototype: void free_grid(int **grid, int height);
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
