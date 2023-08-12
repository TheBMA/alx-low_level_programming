#include <stdlib.h>
#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte.
 * @s: a pointer to the memory block to be filled.
 * @b: the constant byte to fill with.
 * @n: number of bytes of the memory block to fill.
 * Prototype: char *_memset(char *s, char b, unsigned int n);
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}


/**
 * *_calloc - a function that allocates memory for an array, using malloc.
 * The memory is set to zero.
 * @nmemb: number of elements of the array to allocate memory for.
 * @size: size of each nmemb element in bytes.
 * Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
 * Return: a pointer to the allocated memory.
 * Returns NULL if malloc fails, or if nmemb or size is 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc((nmemb * size) + 1);

	if (ar == NULL)
		return (NULL);

	_memset(ar, 0, (nmemb * size));

	return (ar);
}
