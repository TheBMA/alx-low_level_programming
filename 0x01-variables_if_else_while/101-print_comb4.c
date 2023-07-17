#include <stdio.h>

/**
 * main - main block
 *
 * Description: Prints all possible different combinations of three digits.
 * Numbers must be separated by "," followed by a space,
 * The two digits must be different,
 * 012, 120, 102, 021, 201, 210 are considered the same,
 * Print only the smallest combination of three digits,
 * Numbers should be printed in ascending order,
 * only use the putchar function (up to six times),
 * not allowed to use any variable of type char.
 *
 * Return: 0
 */

int main(void)
{
	int x, y, z;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				if (x < y && y < z)
			{
				putchar (x);
				putchar (y);
				putchar (z);

				if (x == '7' && y == '8' && z == '9')
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
	}

	putchar ('\n');

	return (0);
}
