#include <stdio.h>

int _fibonacci(int n);

/**
 * main - a program that prints the first 50 Fibonacci numbers.
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0.
 */

int main(void)
{
	int i;
	int f;

	for (i = 2; i < 50; i++)
	{
		f = _fibonacci(i);
		printf("%d, ", f);
	}

	printf("%d\n", /**/);

	return (0);
}

/**
 * _fibonacci - a funtion that returns the Fibonacci number for n.
 * Pototype: int _fibonacci(int n);
 * @n: an integer.
 * * Return: the Fibonacci number for n.
 */

int _fibonacci(int n)
{
	int f;

	if (n == 0)
		f = 0;

	if (n == 1)
		f = 1;

	if (n > 1)
		f = _fibonacci(n - 1) + _fibonacci(n - 2);

	return (f);
}
