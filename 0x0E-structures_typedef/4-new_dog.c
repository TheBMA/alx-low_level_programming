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
	int i, namelen = 0, ownerlen = 0;

	for (i = 0; name[i] != '\0'; i++)
		namelen++;
	for (i = 0; owner[i] != '\0'; i++)
		ownerlen++;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newname = malloc(namelen + 1);
	if (newname == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newowner = malloc(ownerlen + 1);
	if (newowner == NULL)
	{
		free(newdog);
		free(newname);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		newname[i] = name[i];
	newname[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
		newowner[i] = owner[i];
	newowner[i] = '\0';

	newdog->name = newname;
	newdog->age = age;
	newdog->owner = newowner;
	return (newdog);
}
