#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * If no number is passed to the program, print 0, followed by a new line.
 * @argc: The number of command line arguments.
 * @argv: An array containing the program command line arguments.
 * Return: 0. If one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}

	printf("%d\n", sum);
	return (0);
}
