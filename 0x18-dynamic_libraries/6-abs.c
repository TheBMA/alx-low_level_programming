#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 * @n: the integer to get the absolute value for.
 * Return: the absolute value of the integer n.
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
