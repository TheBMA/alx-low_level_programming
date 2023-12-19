#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * Prototype: int get_bit(unsigned long int n, unsigned int index);
 * @n: an unsigned long int
 * @index: the index starting from 0 of the bit  to get
 * Return: the value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
