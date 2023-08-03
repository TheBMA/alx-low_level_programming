#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: a string of characters.
 * Prototype: void _puts_recursion(char *s);
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar (*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar ('\n');
}