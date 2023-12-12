#include "dog.h"

/**
 * free_dog - a function that frees dogs.
 * Prototype: void free_dog(dog_t *d);
 * @d: pointer to a struct dog.
 * Return: void.
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
