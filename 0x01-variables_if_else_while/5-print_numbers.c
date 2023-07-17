#include <stdio.h>

/**
 * main - main block
 *
 * Description: This program prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	char x;

	for (x = 0; x <= 9; x++)
		printf("%d", x);

	printf("\n");

	return (0);
}
