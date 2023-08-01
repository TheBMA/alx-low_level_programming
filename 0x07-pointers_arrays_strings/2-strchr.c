#include "main.h"

/**
 * *_strchr - a function that locates a character in a string.
 * @s: a string of characters.
 * @c: the character to seek.
 * Prototype: char *_strchr(char *s, char c);
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}

		s++;
	} while (*s != '\0');

	return ('\0');
}
