#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * Prototype: char *_strdup(char *str);
 * @str: a string of characters.
 * Return: a pointer to the new string (duplicate of str).
 * Returns NULL if str = NULL, or if insufficient memory was available.
 */

char *_strdup(char *str)
{
	char *ar;
	int len;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;

	ar = malloc((sizeof(char) * len) + 1);
	if (ar == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		ar[len] = str[len];

	return (ar);
}
