#include "main.h"
/**
  *factorial - Computes factorial
  *@n: The arguments
  *Return: -1 error
  *
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));

}
