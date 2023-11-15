#include "main.h"

/**
 * square_root - a function that returns the
 * natural square root of a number.
 * Prototype: int square_root(int n, int i);
 * @n: an integer.
 * @i: a test case.
 * Return: The natural square root of a number.
 * If n does not have a natural square root, the function should return -1.
 */

int square_root(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i < n)
		return (square_root(n, i + 1));

	return (-1);
}

/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number.
 * Prototype: int _sqrt_recursion(int n);
 * @n: an integer.
 * Return: The natural square root of a number.
 * If n does not have a natural square root, the function should return -1.
 */

int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}
