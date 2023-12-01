#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element of an array.
 * Prototype:
 * void array_iterator(int *array, size_t size, void (*action)(int));
 * @array: a pointer to an integer.
 * @size:
 * @action: pointer to a function that
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

}





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
