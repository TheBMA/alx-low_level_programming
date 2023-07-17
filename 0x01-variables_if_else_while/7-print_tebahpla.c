#include <stdio.h>

/**
 * main - main block
 * 7-print_tebahpla.c
 *
 * Description: This program uses the putchar function twice
 * to print the alphabet in lowercase in reverse,
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
		putchar (x);

	putchar ('\n');

	return (0);
}
