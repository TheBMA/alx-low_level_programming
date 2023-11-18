#include <stdio.h>

/**
 * main - a program that prints the first 50 Fibonacci numbers.
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0.
 */

int main(void)
{
	int i;
	int j = 0;

	for (i = 1; i < 50; i++)
	{
		printf("%d, ", i + j);
		j += i;
	}

	printf("%d\n", i + j);

	return (0);
}
