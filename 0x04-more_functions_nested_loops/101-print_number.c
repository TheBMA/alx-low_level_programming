#include "main.h"

/**
 * print_number - a function that prints an integer.
 * only use _putchar function to print,
 * not allowed to use long, arrays or pointers.
 * not allowed to hard-code special values.
 * @n: integer to print.
 * Prototype: void print_number(int n);
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar ('-');
		n = -n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar (n % 10 + '0');
}
