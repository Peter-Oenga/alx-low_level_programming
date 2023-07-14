#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers
  * @min: smallest number in the array
  * @max: lagrest value in the array
  *
  * Return: pointer to the address of the memory block
  */

int *array_range(int min, int max)
{
	int *b;
	int i, j = 0;

	if (min > max)
		return (NULL);
	b = malloc(sizeof(*b) * ((max - min) + 1));
	if (b != NULL)
	{
		for (i = min; i <= max; i++)
		{
			b[j] = i;
			j++;
		}
		return (b);
	}
	else
		return (NULL);

}
