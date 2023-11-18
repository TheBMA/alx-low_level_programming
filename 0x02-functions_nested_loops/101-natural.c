#include <stdio.h>

/**
 * main - a program that computes and prints the sum of all
 * the multiples of 3 or 5 below 1024 (excluded)..
 *
 * Return: 0.
 */

int main(void)
{
	int i, j;
	int sum = 0;

	for (i = 0; (i * 3) < 1024; i++)
		sum += (i * 3);

	for (j = 0; (j * 5) < 1024; j++)
	{
		if ((j * 5) % 3 != 0)
		sum += (j * 5);
	}
	
	printf("%d\n", sum);
	return (0);
}
