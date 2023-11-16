#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers from n to 98,
 * followed by a new line.
 * Numbers must be separated by a comma, followed by a space.
 * Numbers should be printed in order.
 * The first printed number should be the number passed to your function.
 * The last printed number should be 98.
 * Prototype: void print_to_98(int n);
 * @n: an integer.
 * Return: void.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	printf("98\n");
}
