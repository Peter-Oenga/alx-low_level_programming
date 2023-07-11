#include "main.h"

/**
  * primeNo - Makes possible to evaluate from 1 to n
  * @a: same number as n
  * @b: number that iterates from 1 to n
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
  */
int primeNo(int a, int b)
{
	if (a < 2)
		return (0);
	else if (b > a / 2)
		return (1);
	else if (a % b == 0)
		return (0);
	else
		return (primeNo(a, b + 1));
}
/**
  * is_prime_number - checks if a number is prime
  * @n: Number Integer
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
  */
int is_prime_number(int n)
{
	return (primeNo(n, 2));
}
