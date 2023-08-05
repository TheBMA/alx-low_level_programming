#include "main.h"

/**
 * *_strncat - a function that concatenates two strings.
 * @dest: the first string.
 * @src: a string to append to the end of dest.
 * @n: number of bytes to use at most from src.
 * Prototype: char *_strncat(char *dest, char *src, int n);
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *tmp1 = dest;
	char *tmp2 = src;

	while (*tmp1 != '\0')
		tmp1++;

	while (*tmp2 != '\0' && i < n)
	{
		*tmp1 = *tmp2;
		tmp1++;
		tmp2++;
		i++;
	}

	return (dest);
}
