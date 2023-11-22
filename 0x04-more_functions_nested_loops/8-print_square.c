#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 * If size is 0 or less, the function prints a new line only.
 * Prototype: void print_square(int size);
 * @size: the size of the square.
 * Return: void.
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}