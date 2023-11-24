#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * It allocates memory for an array of nmemb elements of size bytes,
 * The memory is set to zero.
 * Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
 * @nmemb: number of elements.
 * @size: size of each element.
 * Return: a pointer to the allocated memory.
 * Returns NULL if malloc fails, or if nmemb or size is 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	void *varr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	varr = malloc(nmemb * size);
	if (varr == NULL)
		return (NULL);

	arr = varr;

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

	return (varr);
}
