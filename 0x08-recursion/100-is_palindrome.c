#include "main.h"

/**
 * is_palindrome - a function that returns 1 if
 * a string is a palindrome and 0 if not.
 * An empty string is a palindrome.
 * Prototype: int is_palindrome(char *s);
 * @s: a string of characters.
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	char *ss;

	if (*s == '\0')
		return (1);

	ss = last_char(s);

	return (compare_chars(s, ss));
}

/**
 * compare_chars - a function that checks if a string is a palindrome.
 * Prototype: compare_chars(char *s, char *ss);
 * @s: a pointer to a string of characters.
 * @ss: a pointer to the last character of the string.
 * Return: 1 if the string is a palindrome, 0 if not.
 */

int compare_chars(char *s, char *ss)
{
	if (*s != '\0')
	{
		if (*s != *ss)
			return (0);
		return (compare_chars((s + 1), (ss - 1)));
	}
	return (1);
}

/**
 * last_char - a function that returns a pointer
 * to the last character of a string.
 * Prototype: char* last_char(char *s);
 * @s: a string of characters.
 * Return: a pointer to the last character.
 */

char *last_char(char *s)
{
	if (*s != '\0')
		return (last_char(s + 1));
	return (s - 1);
}
