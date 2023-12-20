#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * Prototype: int set_bit(unsigned long int *n, unsigned int index);
 * @n: pointer to an unsigned long int
 * @index: the index starting from 0 of the bit to set to 1
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit <<= index;
	*n |= bit;

	return (1);
}
