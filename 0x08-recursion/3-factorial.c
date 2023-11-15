#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * Prototype: int factorial(int n);
 * @n: an integer.
 * Return: The factorial of the given number.
 * If n is lower than 0, the function should return -1 to indicate an error.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (factorial(n - 1) * n);
}
