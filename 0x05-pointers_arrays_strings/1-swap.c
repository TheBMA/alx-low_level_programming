#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @n: a pointer to the first integer to swap.
 * @b: a pointer to the second integer to swap.
 * Prototype: void swap_int(int *a, int *b);
 */

void swap_int(int *a, int *b)
{
	int *c;

	c = a;
	a = b;
	b = c;
}
