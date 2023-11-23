#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * if NULL is passed, it is treated as an empty string.
 * Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
 * @s1: the first string of characters.
 * @s2: the second string of characters.
 * @n: the number of bytes to copy from s2.
 * Return: a pointer to a newly allocated space in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated.
 * Returns NULL if the function fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *s3;

	len1 = 0;
	len2 = 0;

	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
			len1++;

	if (s2 != NULL)
		for (i = 0; s2[i] != '\0' && len2 < n; i++)
			len2++;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));

	for (i = 0; i < len1; i++)
		s3[i] = s1[i];

	for (j = 0; j < len2; j++, i++)
		s3[i] = s2[j];

	s3[i] = '\0';

	return (s3);
}
