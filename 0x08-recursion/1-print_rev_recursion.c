#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 *
 * @s: a string of characters.
 * Prototype: void _print_rev_recursion(char *s);
 * Return: void.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		_putchar (*s);
	}
}
