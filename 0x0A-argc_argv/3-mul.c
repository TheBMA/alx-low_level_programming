#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: The number of command line arguments.
 * @argv: An array containing the program command line arguments.
 * Return: 0. If the program does not receive two arguments, print Error,
 * followed by a new line, and return 1
 */

int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}

	return (0);
}
