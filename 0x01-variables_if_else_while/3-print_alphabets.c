#include <stdio.h>

/**
 * main - main block
 *
 * Description: This program uses the putchar function three times
 * to print the alphabet in lowercase then uppercase, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		putchar (x);

	x = 'A';

	for (x = 'A'; x <= 'Z'; x++)
		putchar (x);

	putchar ('\n');

	return (0);
}
