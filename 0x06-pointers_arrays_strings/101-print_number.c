#include "main.h"

/**
 * print_number - a function that prints an integer.
 * Using only the _putchar function to print.
 * Prototype: void print_number(int n);
 * @n: an integer.
 * Return: void
 */

void print_number(int n)
{
	int i = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while ((n / i) >= 10)
		i *= 10;

	while (i >= 1)
	{
		_putchar((n / i) + '0');
		n %= i;
		i /= 10;
	}
}
