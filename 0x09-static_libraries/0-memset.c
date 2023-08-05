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
