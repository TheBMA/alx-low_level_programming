#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: a pointer to the string to print.
 * Prototype: void puts2(char *str);
 */

void puts2(char *str)
{
	while (*str != 0)
	{
		_putchar (*str);
		str++;
		if (*str != 0)
			str++;
	}
	_putchar ('\n');
}
