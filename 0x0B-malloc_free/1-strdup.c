#include <stdlib.h>
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

/**
 * *_strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as a parameter.
 * @str: the string to duplicate.
 * Prototype: char *_strdup(char *str);
 * Return: a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available, or if str = NULL.
 */

char *_strdup(char *str)
{
	char *ar;
	int i = 0;
	int lengh;

	if (str == NULL)
		return (NULL);

	lengh = (_strlen(str) * sizeof(char));

	ar = malloc(lengh + 1);

	if (ar == NULL)
		return (NULL);

	while (i < lengh)
	{
		ar[i] = str[i];
		i++;
	}

	return (ar);
}
