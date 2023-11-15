#include "main.h"

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * Prototype: int is_prime_number(int n);
 * @n: an integer.
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	int i = last_digit(n);

	if (n == 2 || n == 3 || n == 5)
		return (1);

	if (n <= 1)
		return (0);

	if (i == 0 || i == 4 || i == 6 || i == 8)
		return (0);

	if ((i == 2 && n != 2) || (i == 5 && n != 5))
		return (0);

	if (i == 1 || i == 3 || i == 7 || i == 9)
		return (is_prime(n, (n - 1)));

	return (0);
}

/**
 * last_digit - a function that returns the last digit of a number.
 * Prototype: int last_digit(int n);
 * @n: the number to get the last digit for.
 * Return: the value of the last digit.
 */

int last_digit(int n)
{
	if (n < 0)
		return ((n % 10) * -1);
	else
		return (n % 10);
}

/**
 * is_prime - "is_prime_number" helper function.
 * Prototype: int is_prime(int i, int j);
 * @i: number to check if prime.
 * @j: devider to test.
 * Return: 1 if i is a prime number, 0 if not.
 */

int is_prime(int i, int j)
{
	if (j > 1)
	{
		if ((i % j) == 0)
			return (0);

		return (is_prime(i, j - 1));
	}
	return (1);
}
