#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* init_dog - a function that initializes a variable of type struct dog.
* @d: a pointer.
* @name: a string of characters.
* @age: a float.
* @owner: a string of characters.
* Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);
* Return: void.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
