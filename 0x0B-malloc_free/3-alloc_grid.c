#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to
 * a 2 dimensional array of integers.
 * Each element of the grid should be initialized to 0.
 * Prototype: int **alloc_grid(int width, int height);
 * @width: an integer.
 * @height: an integer.
 * Return: a pointer to a 2 dimensional array of integers, or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ar;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(sizeof(int *) * width);
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		ar[i] = malloc(sizeof(int) * height);
		if (ar[i] == NULL)
		{
			for (j = 0; j <= i; j++)
				free(ar[i]);
			free(ar);
			return (NULL);
		}

		for (j = 0; j < height; j++)
			ar[i][j] = 0;
	}

	return (ar);
}
