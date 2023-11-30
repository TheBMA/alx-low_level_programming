#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 * Prototype:
 * void print_strings(const char *separator, const unsigned int n, ...);
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function
 * If separator is NULL, it doesn’t print it.
 * If one of the strings is NULL, it prints (nil) instead.
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
