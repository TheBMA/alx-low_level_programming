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
	unsigned long int n, n1, n2;

	n1 = 1;
	n2 = 0;

	for (i = 2; i <= 50; i++)
	{
		n = n1 + n2;

		printf("%lu, ", n);

		n2 = n1;
		n1 = n;
	}

	printf("%lu\n", n1 + n2);

	return (0);
}
