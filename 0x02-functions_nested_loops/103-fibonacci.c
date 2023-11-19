#include <stdio.h>

/**
 * main - a program that finds and prints the sum of the even-valued terms
 * in the Fibonacci sequence whose values do not exceed 4,000,000.
 *
 * Return: 0.
 */

int main(void)
{
	int i, n, n1, n2;
	unsigned long int sum;

	n1 = 1;
	n2 = 0;
	sum = 0;

	for (i = 2; n <= 4000000; i++)
	{
		n = n1 + n2;

		if ((n % 2) == 0)
			sum += n;

		n2 = n1;
		n1 = n;
	}

	printf("%lu\n", sum);

	return (0);
}
