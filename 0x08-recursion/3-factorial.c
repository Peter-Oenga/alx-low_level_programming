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
<<<<<<< HEAD

=======
>>>>>>> 13462e4364d50fae735b4c0eb641ea02f65b802d
}
