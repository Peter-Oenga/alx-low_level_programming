#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: Pointer to the array
 * @n: Number of elements to be printed
 *
 * Return: None
 */
void print_array(int *a, int n)
{
	int i;


	if (a == NULL || n <= 0)
		return;
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
