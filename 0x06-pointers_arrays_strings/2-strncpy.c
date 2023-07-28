#include "main.h"

/**
 * *_strncpy - a function that copies a string.
 * @dest: the first string.
 * @src: the string to copy to dest.
 * @n: number of bytes to copy at most from src.
 * Prototype: char *_strncpy(char *dest, char *src, int n);
 * Return: a pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
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
	if (i < n)
	{
		for (i = i; i == (n + 1); i++)
		{
			*tmp1 = '\0';
			tmp1++;
		}
	}
	return (dest);
}
