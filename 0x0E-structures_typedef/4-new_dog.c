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
	char *newname, *newowner;
	int i = 0;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newname = malloc(sizeof(name));
	if (newname == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newowner = malloc(sizeof(owner));
	if (newowner == NULL)
	{
		free(newdog);
		free(newname);
		return (NULL);
	}

	while (name[i] != '\0')
	{
		newname[i] = name[i];
		i++;
	}
	newname[i] = '\0';

	i = 0;
	while (owner[i] != '\0')
	{
		newowner[i] = owner[i];
		i++;
	}
	newowner[i] = '\0';

	newdog->name = newname;
	newdog->age = age;
	newdog->owner = newowner;

	return (newdog);
}
