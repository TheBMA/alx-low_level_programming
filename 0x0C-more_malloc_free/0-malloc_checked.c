#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 * if malloc fails, causes normal process termination with a status value of 98
 * Prototype: void *malloc_checked(unsigned int b);
 * @b: size of memory to allocate in bytes.
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
