#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * Prototype: void print_name(char *name, void (*f)(char *));
 * @name: a string of characters.
 * @f: pointer to a function that prints a string.
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (*name != '\0')
		f(name);
}
