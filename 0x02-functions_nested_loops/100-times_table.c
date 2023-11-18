#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0.
 * Prototype: void print_times_table(int n);
 * @n: an integer.
 * If n is greater than 15 or less than 0
 * the function should not print anything
 * Return: void.
 */

void print_times_table(int n)
{
	int i, j;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}

	if (n <= 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
				{
					_putchar('0');
					_putchar(',');
				}
				else
				{
					_putchar(' ');
					timez_table(i, j);
				if (j == n)
					_putchar('\n');
				else
					_putchar(',');
				}
			}
		}
	}
}

/**
 * timez_table - function that completes print_times_table
 * to keep the function print_times_table under 40 lines (for Betty style)
 * Prototype: void timez_table(int i, int j);
 * @i: an integer.
 * @j: an integer.
 * Return: void.
 */

void timez_table(int i, int j)
{
	if ((i * j) < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar((i * j) + '0');
	}
	else if ((i * j) < 100)
	{
		_putchar(' ');
		_putchar((((i * j) / 10) % 10) + '0');
		_putchar(((i * j) % 10) + '0');
	}
	else
	{
		_putchar((((i * j) / 100) % 10) + '0');
		_putchar((((i * j) / 10) % 10) + '0');
		_putchar(((i * j) % 10) + '0');
	}
}
