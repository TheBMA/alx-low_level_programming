#include "main.h"

/**
 * print_number - a function that prints an integer.
 * only use _putchar function to print,
 * not allowed to use long, arrays or pointers.
 * not allowed to hard-code special values.
 * Prototype: void print_number(int n);
 */

void print_number(int n)
{
	int remainder;

	if (n <= 9 && n >= -9)
		_putchar (n);
	else
		while (n != '0')
		{
			remainder = n % 10;
			n = n / 10;
			_putchar (remainder);
		}
}
