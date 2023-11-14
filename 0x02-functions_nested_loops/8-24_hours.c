#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day.
 * Prototype: void jack_bauer(void);
 * Return: void.
 */

void jack_bauer(void)
{
	int h, hh, m, mm;

	for (hh = 0; hh < 3; hh++)
	{
		for (h = 0; h < 10; h++)
		{
			for (mm = 0; mm < 6; mm++)
			{
				for (m = 0; m < 10; m++)
				{
					_putchar (hh + '0');
					_putchar (h + '0');
					_putchar (':');
					_putchar (mm + '0');
					_putchar (m + '0');
					_putchar ('\n');

					if (hh == 2 && h == 3 && mm == 5 && m == 9)
						return;
				}
			}
		}
	}
}
