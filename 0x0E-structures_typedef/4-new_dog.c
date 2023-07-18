#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * new_dog - Creates a new dog.
  * @name: Pointer to the name of dog
  * @age: Age of the dog
  * @owner: Pointer to the owner's name
  *
  *
  * Return: Null if memory alocation fails
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int nl;
	int ol;

	nl = strlen(name);
	ol = strlen(owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	return (NULL);
	new_dog->name = malloc((nl + 1) * sizeof(char));
	new_dog->owner = malloc((ol + 1) * sizeof(char));

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
