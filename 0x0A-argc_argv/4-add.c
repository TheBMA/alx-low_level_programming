#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * If no number is passed to the program, print 0.
 * If one of the numbers contains symbols that are not digits, print Error.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: 0 if success, 1 if Error.
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
