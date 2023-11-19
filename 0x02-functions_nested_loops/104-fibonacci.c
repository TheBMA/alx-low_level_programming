#include <stdio.h>

/**
 * main - a program that finds and prints the first 98 Fibonacci numbers,
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

	for (i = 2; i <= 98; i++)
	{
		n = n1 + n2;

		printf("%lu, ", n);

		n2 = n1;
		n1 = n;
	}

	printf("%lu\n", n1 + n2);

	return (0);
}
