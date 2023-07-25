#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: a pointer to the string to reverse.
 * Prototype: void rev_string(char *s);
 */

void rev_string(char *s)
{
	char *lets = s;
	char *go = s;
	char tmp;

	while (*lets != 0)
		lets++;

	lets--;
	while (lets > go)
	{
		tmp = *lets;
		*lets = *go;
		*go = tmp;
		lets--;
		go++;
	}
}
