#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * Prototype: void print_binary(unsigned long int n);
 * @n: number to be printed in binary.
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, start = 0;

	if (n == 0)
		_putchar('0');

	else
	{
		for (i = (sizeof(unsigned long int) * 8) - 1; i >= 0; i--)
		{
			if (((n >> i) & 1) == 1)
			{
				start = 1;
				_putchar('1');
			}
			else if (start == 1)
				_putchar('0');
		}
	}
}
