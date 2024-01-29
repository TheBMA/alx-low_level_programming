#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @s: a pointer to the string to print.
 * Prototype: void _puts(char *s);
 */

void _puts(char *s)
{
	while (*s != 0)
	{
		_putchar (*s);
		s++;
	}

	_putchar ('\n');
}
