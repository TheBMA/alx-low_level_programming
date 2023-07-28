#include "main.h"

/**
 * *_strcat - a function that concatenates two strings.
 * @dest: the first string.
 * @src: a string to append to the end of dest.
 * Prototype: char *_strcat(char *dest, char *src);
 * Return: a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	char *tmp1 = dest;
	char *tmp2 = src;

	while (*tmp1 != '\0')
		tmp1++;

	while (*tmp2 != '\0')
	{
		*tmp1 = *tmp2;
		tmp1++;
		tmp2++;
	}

	return (dest);
}
