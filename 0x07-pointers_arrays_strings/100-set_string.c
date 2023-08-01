#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: the pointer about to change.
 * @to: pointer to a string.
 * Prototype: void set_string(char **s, char *to);
 */

void set_string(char **s, char *to)
{
	*s = to;
}
