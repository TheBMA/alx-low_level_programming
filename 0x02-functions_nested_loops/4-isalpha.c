#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: the character to check.
 * Return: 1 if c is a letter, 0 otherwise.
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
