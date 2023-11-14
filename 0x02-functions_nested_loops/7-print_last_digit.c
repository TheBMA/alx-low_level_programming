#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: the number to get the last digit for.
 * Return: the value of the last digit.
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar (((n % 10) * -1) + '0');
		return ((n % 10) * -1);
	}
	else
	{
		_putchar ((n % 10) + '0');
		return (n % 10);
	}
}
