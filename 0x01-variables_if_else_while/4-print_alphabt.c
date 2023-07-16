#include <stdio.h>

/**
 * main - main block
 *
 * Description: This program prints the alphabet in lowercase,
 * except e and q, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
			putchar (x);
	}

	putchar ('\n');

	return (0);
}
