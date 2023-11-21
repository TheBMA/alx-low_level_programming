#include "main.h"
#include <stdlib.h>

/**
 * strtow - a function that splits a string into words.
 * The last element of the returned array is NULL.
 * Prototype: char **strtow(char *str);
 * @str: a string of characters.
 * Return: a pointer to an array of strings (words).
 * returns NULL if it fails, or if str == NULL or str == "".
 */

char **strtow(char *str)
{
	char **wrds;
	int i, j, k, wrdcnt, wrdlen;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0, wrdcnt = 1; str[i] != '\0'; i++)
		if (str[i] == ' ')
			wrdcnt++;

	wrds = malloc(sizeof(char *) * (wrdcnt + 1));
	if (wrds == NULL)
	{
		free(wrds);
		return (NULL);
	}

	for (j = 0, k = 0; j < wrdcnt + 1; j++)
	{
		for (i = 0; str[k] != ' '; i++, wrdlen++)
			;

		wrds[j] = malloc(sizeof(char) * (wrdlen + 1));
		if (wrds[j] == NULL)
		{
			for (i = 0; i < j; i++)
				free(wrds[i]);
			free(wrds);
			return (NULL);
		}
	}

	for (j = 0, k = 0; j < wrdcnt + 1; j++)
	{
		for (i = 0; str[k] != ' '; i++, k++)
			wrds[j][i] = str[k];

		wrds[j][i] = '\0';
		i++;
		k++;
	}

	wrds[j] = NULL;

	return (wrds);
}
