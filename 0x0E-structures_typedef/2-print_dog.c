#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 * Prototype: void print_dog(struct dog *d);
 * @d: a struct dog.
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
