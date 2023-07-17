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

	putchar ('0');

	for (x = '1'; x <= '9'; x++)
	{
		putchar (',');
		putchar (' ');
		putchar (x);
	}

	return (0);
}
