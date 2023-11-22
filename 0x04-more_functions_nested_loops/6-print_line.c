#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * If n is 0 or less, the function prints '\n' only.
 * Prototype: void print_line(int n);
 * @n: the number of times the character _ is printed.
 * Return: void.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');

	_putchar('\n');
}
