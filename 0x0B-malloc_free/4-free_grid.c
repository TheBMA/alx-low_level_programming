#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid previously
 * created by the alloc_grid function.
 * Prototype: void free_grid(int **grid, int height);
 * @grid: a 2 dimensional array.
 * @height: number of rows in the grid.
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < sizeof(grid); j++)
		{
			free(grid[i][j];)
		}
	}

	free(grid);
}
