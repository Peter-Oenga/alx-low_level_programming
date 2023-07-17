#include "dog.h"
#include <stdio.h>

/**
  * print_dog - Prints dog attributes
  * struct dog - Contains dog features
  * @d: Pointer to struct dog
  *
  *Return: Nothing
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
