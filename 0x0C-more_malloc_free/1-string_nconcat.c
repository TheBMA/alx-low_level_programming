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
 * *string_nconcat - a function that concatenates two strings.
 * If n is greater or equal to the length of s2 then use the entire string s2.
 * if NULL is passed, treat it as an empty string.
 * @s1: the first string.
 * @s2: the second string.
 * @n: number of characters to copy from s2.
 * Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
 * Return: pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated.
 * If the function fails, it should return NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lengh1;
	unsigned int lengh2;
	char *ar;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	lengh1 = _strlen(s1);
	lengh2 = _strlen(s2);

	ar = malloc(lengh1 + lengh2 + 1);
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < lengh1; i++)
		ar[i] = s1[i];

	for (j = 0; j < lengh2 && j < n; j++)
	{
		ar[i] = s2[j];
		i++;
	}

	ar[i] = '\0';
	return (ar);
}
