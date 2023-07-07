#include "main.h"
/**
  * sqrt - Evaluation
  * @x: same number
  * @y: number that iterates from 1 to n
  *
  * Return: On success 1.
  * On error, -1
  */
int sqrttd(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (sqrttd(x, y + 1));
}
/**
 * _sqrt_recursion - Shows natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1
 */
int _sqrt_recursion(int n)
{
	return (sqrttd(n, 1));
}
