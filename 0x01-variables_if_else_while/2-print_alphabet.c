#include <stdio.h>

/**
 * main - main block
 * 2-print_alphabet.c - Print the alphabet in lowercase
 *
 * Description: This program uses the putchar function twice
 * to print the alphabet in lowercase, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		putchar (x);

	putchar ("\n");

	return (0);
}
