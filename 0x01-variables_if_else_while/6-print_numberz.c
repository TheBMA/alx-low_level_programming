#include <stdio.h>

/**
 * main - main block
 * 6-print_numberz.c - Print all single digit numbers
 *
 * Description: This program uses the putchar function twice
 * to print all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		putchar (x);

	putchar ('\n');

	return (0);
}
