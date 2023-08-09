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
 * *str_concat - a function that concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * Prototype: char *str_concat(char *s1, char *s2);
 * Return: pointer to a newly allocated space in memory which contains
 * the contents of s1, followed by the contents of s2, and null terminated.
 * Returns NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int lengh1 = 0;
	int lengh2 = 0;
	char *ar;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	else
		lengh1 = _strlen(s1);

	if (s2 == NULL)
		s2 = "";
	else
		lengh2 = _strlen(s2);

	ar = malloc(lengh1 + lengh2 + 1);

	while (i < lengh1)
	{
		ar[i] = s1[i];
		i++;
	}

	while (j < lengh2)
	{
		ar[i] = s2[j];
		j++;
		i++;
	}

	ar[i] =	'\0';
	return (ar);
}
