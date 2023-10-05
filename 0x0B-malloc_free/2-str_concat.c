#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - a function that concatenates two strings.
 * If NULL is passed, treat it as an empty string.
 * @s1: the first string.
 * @s2: the second string.
 * Prototype: char *str_concat(char *s1, char *s2);
 * Return: a pointer to a newly allocated space in memory which contains the
 * contents of s1, followed by the contents of s2, and null terminated.
 */

char *str_concat(char *s1, char *s2)
{
	int i, len1, len2, len3;
	char *s3;

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	len3 = len1 + len2;

	s3 = (char *) malloc(len3 * sizeof(char) + 1);

	if (s3 = NULL)
		return (NULL);

}
