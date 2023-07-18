#include <stdlib.h>
#include "dog.h"
/**
  * free_dog - Frees dog memory
  * @d: Pointer to dog
  *
  *
  * Return: Empty
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
