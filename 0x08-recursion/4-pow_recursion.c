#include "main.h"

/**
 * _pow_recursion - a function that returns the
 * value of x raised to the power of y.
 * @x: an integer.
 * @y: an integer.
 * Prototype: int _pow_recursion(int x, int y);
 * Return: the value of x raised to the power of y.
 * If y is lower than 0, the function should return -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, (y - 1)));
}
