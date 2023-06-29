#include "main.h"
/**
  *reverse_array - Reverses array
  *@a: Pointer to array
  *@n: Number of elements in the array
  *Return: Nothing
  */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}
