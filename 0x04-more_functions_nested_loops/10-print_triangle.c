#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * Prototype: void print_triangle(int size);
 * @size: the size of the triangle.
 * If size is 0 or less, the function should print only a new line
 * Return: void.
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - (i + 1); j++)
				_putchar(' ');
			for (j = 0; j < (i + 1); j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
