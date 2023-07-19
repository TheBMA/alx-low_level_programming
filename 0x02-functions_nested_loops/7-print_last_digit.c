#include "main.h"

/**
 * print_last_digit - a function that that prints the last digit of a number.
 * @n: the number to get the last digit for.
 * Return: the value of the last digit.
 */

int print_last_digit(int n)
{
	int last_d = n % 10;

	_putchar (last_d);
	return (n % 10);
}
