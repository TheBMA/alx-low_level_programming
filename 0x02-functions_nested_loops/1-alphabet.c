#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Prototype: void print_alphabet(void);
 * only use _putchar twice in your code.
 *
 * Return: void.
 */

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar (x);

	_putchar ('\n');
}
