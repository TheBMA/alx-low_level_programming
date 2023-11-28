#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - A dog's ID.
 * @name: a string of characters.
 * @age: a float.
 * @owner: a string of characters.
 *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog;
#endif
