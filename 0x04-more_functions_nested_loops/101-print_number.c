#include "main.h"

/**
 * print_number - a function that prints an integer.
 * not allowed to use long, arrays or pointers.
 * not allowed to hard-code special values.
 * Prototype: void print_number(int n);
 * @n: integer to print.
 * Return: void.
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar ('-');
		n = -n;
	}

	if ((n / 10) != 0)
		print_number(n / 10);

	_putchar ((n % 10) + '0');
}
