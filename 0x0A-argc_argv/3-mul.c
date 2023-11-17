#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * If the program does not receive two arguments, print Error.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: 0 if success, 1 if Error.
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);

	return (0);
}
