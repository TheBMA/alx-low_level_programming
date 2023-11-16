#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
 * Prototype: void times_table(void);
 * Return: void.
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				if ((i * j) < 10)
				{
					_putchar(' ');
					_putchar((i * j) + '0');
				}
				else
				{
					_putchar((((i * j) / 10) % 10) + '0');
					_putchar(((i * j) % 10) + '0');
				}
				if (j == 9)
					_putchar('\n');
				else
					_putchar(',');
			}
		}
	}
}
