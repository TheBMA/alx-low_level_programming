#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * Prototype: char *create_array(unsigned int size, char c);
 * @size: size of the array in bytes.
 * @c:the character to initialize the array with.
 * Return: a pointer to the array,
 * return NULL if it fails or if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
