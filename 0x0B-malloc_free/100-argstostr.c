#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program.
 * Each argument is followed by a '\n' in the new string.
 * Prototype: char *argstostr(int ac, char **av);
 * @ac: arguments count.
 * @av: arguments vector.
 * Return: a pointer to a new string, or NULL if it fails.
 * Returns NULL if ac == 0 or av == NULL.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1, len = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}

	str = malloc((sizeof(char) * len) + 1);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = 0, k = 0; i < ac; i++)
	{
		if (i > 0)
		{
			str[k] = '\n';
			k++;
		}

		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			str[k] = av[i][j];
		}
	}

	str[k] = '\0';

	return (str);
}
