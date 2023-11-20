#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * if NULL is passed, treat it as an empty string.
 * Prototype: char *str_concat(char *s1, char *s2);
 * @s1: the first string.
 * @s2: the second string.
 * Return: a newly allocated space in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated.
 * Return NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int i, len1, len2, len3;
	char *ar;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		for (len1 = 0; s1[len1] != '\0'; len1++)
			;
	}

	if (s2 == NULL)
		len2 = 0;
	else
	{
		for (len2 = 0; s2[len2] != '\0'; len2++)
			;
	}

	ar = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ar == NULL)
		return (NULL);

	for (len3 = 0; len3 < len1; len3++)
		ar[len3] = s1[len3];

	for (i = 0; s2[i] != '\0'; i++, len3++)
		ar[len3] = s2[i];

	ar[len3] = '\0';

	return (ar);
}
