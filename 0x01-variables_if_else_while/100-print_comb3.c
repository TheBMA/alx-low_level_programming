#include <stdio.h>

/**
 * main - main block
 *
 * Description: Prints all possible different combinations of two digits.
 * Numbers must be separated by "," followed by a space,
 * The two digits must be different, 01 and 10 are considered the same,
 * Print only the smallest combination of two digits,
 * Numbers should be printed in ascending order,
 * only use the putchar function (up to four times),
 * not allowed to use any variable of type char.
 *
 * Return: 0
 */

int main(void)
{
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (x < y)
			{
				putchar (x);
				putchar (y);

				if (x == '8' && y == '9')
				{
					;
				}
				else
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}

	putchar ('\n');

	return (0);
}
