#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 * Prototype: void more_numbers(void);
 */

void more_numbers(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '14'; j++)
			_putchar (i);
	}
	_putchar ('\n');
}
