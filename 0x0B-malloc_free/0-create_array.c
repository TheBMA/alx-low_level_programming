#include <stdlib.h>
#include "main.h"

/**
 * *create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: memory size for the array.
 * @c: character to initialize the array with.
 * Prototype: char *create_array(unsigned int size, char c);
 * Return: a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (NULL);

	while (i < size)
	{
		ar[i] = c;
		i++;
	}

	return (ar);
}
