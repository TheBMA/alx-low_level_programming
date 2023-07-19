#include "main.h"

/**
 * print_alphabet - a function that prints 10 times the alphabet
 * in lowercase, followed by a new line.
 *
 * Prototype: void print_alphabet_x10(void);
 * only use _putchar twice in your code.
 *
 * Return: void.
 */

void print_alphabet_x10(void)
{
	int x, y;

	for (y = '0'; y <= '9'; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar (x);

		_putchar ('\n');
	}
}
