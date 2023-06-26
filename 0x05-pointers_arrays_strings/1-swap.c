#include "main.h"
/**
  *swap_int - Swaps the values of a and b
  *@a: The pointer to int a
  *@b:Pointer to integer b
  *Return: Nothing
  */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
