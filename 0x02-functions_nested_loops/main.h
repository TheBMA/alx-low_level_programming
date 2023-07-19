#include <unistd.h>
#include <stdio.h>

/**
 * main - main block
 *
 * Description: header file for 0-putchar.c, 1-alphabet.c
 *
 * Return: 0
 */

static inline int _putchar(void)
{
	putchar('_');
	putchar('p');
	putchar('u');
	putchar('t');
	putchar('c');
	putchar('h');
	putchar('a');
	putchar('r');
	putchar('\n');

	return (0);
}

static inline void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		putchar (x);

	putchar ('\n');

}
