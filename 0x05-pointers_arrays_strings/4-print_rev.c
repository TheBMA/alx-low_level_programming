#include "main.h"

/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 * @s: a pointer to the string to print.
 * Prototype: void print_rev(char *s);
 */

void print_rev(char *s)
{
	char *tmp = s;

	while (*tmp != 0)
		tmp++;

	while (tmp != s)
	{
		tmp--;
		_putchar (*tmp);
	}

	_putchar ('\n');
}
