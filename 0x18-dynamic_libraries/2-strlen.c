#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: a pointer to the first character of the string.
 * Prototype: int _strlen(char *s);
 * Return: the length of the string.
 */

int _strlen(char *s)
{
	int tmp = 0;

	for (s = s; *s != 0; s++)
	{
		tmp = tmp + 1;
	}

	return (tmp);
}
