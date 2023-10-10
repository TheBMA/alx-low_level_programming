#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - a function that allocates memory for an array, using malloc.
 * The memory is set to zero.
 * @nmemb: number of elements of the array.
 * @size: size of each element in bytes.
 * Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
 * Return: a pointer to the allocated memory.
 * If malloc fails, or if nmemb or size is 0, then _calloc returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *mem;
	char *tmp;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	tmp = (char *)mem;

	for (i = 0; i < (nmemb * size); i++)
		tmp[i] = 0;

	mem = (void *)tmp;
	
	return (mem);
}
