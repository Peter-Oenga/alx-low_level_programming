#include "main.h"
/**
  *_pow_recursion - Computes power
  *@a: The base input
  *@b: The power
  *Return: on error -1
  */
int _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);
	else if (b == 0)
		return (1);
	else
		return (a * _pow_recursion(a, b - 1));
}
