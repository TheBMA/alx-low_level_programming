#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: the given number.
 * Prototype: int factorial(int n);
 * Return: the factorial of a given number.
 */

int factorial(int n)
{
	if (n > 1)
	{
		return (n * factorial(n - 1));
	}
}
