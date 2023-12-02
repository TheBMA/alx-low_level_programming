#include "dog.h"

/**
 * new_dog - a function that creates a new dog.
 * Prototype: dog_t *new_dog(char *name, float age, char *owner);
 * @name: a string of characters.
 * @age: a float.
 * @owner: a string of characters.
 * Return: a pointer to a struct dog, or NULL if the function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

	return (newdog);
}
