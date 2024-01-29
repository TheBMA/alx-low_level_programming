#include "main.h"

/**
 * _isupper - a function that that prints the last digit of a number.
 * @c: the character to check for upper case.
 * Return: 1 if c is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
