#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money.
 * If the number passed as the argument is negative, print 0.
 * If the number of arguments passed is not exactly 1, print Error.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: 0 if success, 1 if Error.
 */

int main(int argc, char *argv[])
{
	int coins = 0;
	int rest = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
		return (0);
	}
	coins = atoi(argv[1]) / 25;
	if ((atoi(argv[1]) % 25) == 0)
	{
		printf("%d\n", coins);
		return (0);
	}
	rest = atoi(argv[1]) % 25;
	coins += rest / 10;
	if ((rest % 10) == 0)
	{
		printf("%d\n", coins);
		return (0);
	}
	if ((rest / 10) != 0)
		rest -= (rest % 10);
	coins += rest / 5;
	if ((rest % 5) == 0)
	{
		printf("%d\n", coins);
		return (0);
	}
	if ((rest / 5) != 0)
		rest -= (rest % 5);
	coins += rest / 1;
	printf("%d\n", coins);
	return (0);
}
