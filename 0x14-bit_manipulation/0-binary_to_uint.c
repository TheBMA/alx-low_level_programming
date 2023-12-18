#include "main.h"

/**
 * pow_of_two - a function that calculates powers of 2
 * Prototype: unsigned int pow_of_two(unsigned int n);
 * n: the exponent.
 * Return: the result of raising 2 to the power of n.
 */

unsigned int pow_of_two(unsigned int n)
{
	unsigned int result = 1;

	if (n == 0)
		return (result);

	while (n != 0)
	{
		result *= 2;
		n--;
	}

	return (result);
}

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * Prototype: unsigned int binary_to_uint(const char *b);
 * @b: a pointer to a string of 0 and 1 chars.
 * Return: the converted number, or 0 if b is NULL
 * Return 0 if there is one or more chars in the string b that is not 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, len = 0, number = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		len++;
		i++;
	}

	for (i = 0; b[i] != '\0'; i++)
		number += pow_of_two(--len) * (b[i] - '0');

	return (number);
}
