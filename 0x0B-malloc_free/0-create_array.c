#include "main.h"
#include <stdlib.h>

/**
 * *create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array
 * @c: The character to initialize with.
 * Prototype: char *create_array(unsigned int size, char c);
 * Return: a pointer to the array, or NULL if it fails.
 * Returns NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = (char *) malloc(size * sizeof(char));

	if (arr == NULL || size == 0)
		return (NULL);


	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
