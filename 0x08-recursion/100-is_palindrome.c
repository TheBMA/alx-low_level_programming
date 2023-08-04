#include "main.h"

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome,
 * and 0 if not.
 * @s: a string of characters.
 * Prototype: int is_palindrome(char *s);
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	char *tmp = s;

	if (*s == '\0')
	{
		return (1);
	}

	while (*s != '\0')
	{
		s++;
	}
	--s;
	for (; tmp < s; tmp++, s--)
	{
		if (*tmp != *s)
			return (0);
	}
	return (1);
}
