#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * 1-last_digit.c - Print the last digit of n and check its value.
 * n: random number
 *
 * Description: This program will assign a random number to the
 * variable n each time it is executed.
 * The output of the program is: Last digit of n is "last digit" and is
 * "greater than 5/less than 6 and not 0/0".
 *
 * Return: 0
 */

int main(void)
{
	int n, Last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	Last_digit = n % 10;

	printf("Last digit of %d is %d ", n, Last_digit);

	if (Last_digit == 0)

		printf("and is 0\n");

	else if (Last_digit > 5)

		printf("and is greater than 5\n");

	else

		printf("and is less than 6 and not 0\n");

	return (0);
}
