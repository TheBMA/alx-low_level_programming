#include <stdio.h>

/**
 * main - main block
 * 8-print_base16.c
 *
 * Description: This program uses the putchar function
 * to print all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
		putchar (x);

	x = 'a';

	for (x = 'a'; x <= 'f'; x++)
		putchar (x);

	putchar ('\n');

	return (0);
}
