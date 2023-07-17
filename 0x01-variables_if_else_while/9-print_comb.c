#include <stdio.h>

/**
 * main - main block
 * 9-print_comb.c
 *
 * Description: This program uses the putchar function
 * to print all the single-digit numbers,
 * Numbers must be separated by , followed by a space.
 * Return: 0
 */

int main(void)
{
	int x;



	for (x = '0'; x <= '9'; x++)
	{
		putchar (x);
		if (x == '9')
			putchar ('\n');
		if (x < '9')
		{
			putchar (',');
			putchar (' ');
		}

	}

	return (0);
}
