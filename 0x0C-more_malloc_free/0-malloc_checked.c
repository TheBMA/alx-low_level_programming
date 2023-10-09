#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - a function that allocates memory using malloc.
 * if malloc fails, the malloc_checked function should cause
 * normal process termination with a status value of 98.
 * @b: size of memory to allocate in bytes.
 * Prototype: void *malloc_checked(unsigned int b);
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
	{
		free(mem);
		exit(98);
	}

	return (mem);
}
