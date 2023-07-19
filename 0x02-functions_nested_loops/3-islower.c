#include "main.h"

/**
 * _islower - a function that that checks for lowercase character.
 * @c: the character to check.
 * Return: 1 if c is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a')
		return (1);
	else
		return (0);
}
