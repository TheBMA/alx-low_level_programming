#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 * Prototype: char *_strdup(char *str);
 * Return: a pointer to a new string which is a duplicate of the string str.
 * Returns NULL if str = NULL or if insufficient memory was available.
 */

char *_strdup(char *str)
{
	int i, len;
	char *str2;

	for (len = 0; str[len] != '\0'; len++)
		;

	str2 = (char *) malloc(len * sizeof(char));

	if (str == NULL || str2 == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		str2[i] = str[i];

	return (str2);
}
