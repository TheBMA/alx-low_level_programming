#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - a function that concatenates two strings.
 * If NULL is passed, it is treated as an empty string.
 * @s1: the first string.
 * @s2: the second string.
 * @n: number of bytes to copy from s2.
 * Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
 * Return: a pointer to a newly allocated space in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated.
 * If the function fails, it should return NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *s3;

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

	if (len2 < n)
		s3 = malloc((len1 + len2) * sizeof(char) + 1);
	else
		s3 = malloc((len1 + n) * sizeof(char) + 1);

	if (s3 == NULL)
	{
		free(s3);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
		s3[i] = s1[i];

	for (j = 0; j < len2 && j < n; j++, i++)
		s3[i] = s2[j];

	s3[i] = '\0';

	return (s3);
}
