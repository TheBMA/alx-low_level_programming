#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element of an array.
 * Prototype:
 * void array_iterator(int *array, size_t size, void (*action)(int));
 * @array: an array of integers.
 * @size: the size of the array.
 * @action: pointer to the function to use.
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
