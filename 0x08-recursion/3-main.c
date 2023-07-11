#include "main.h"
#include <stdio.h>

/**
<<<<<<< HEAD
  * main - check the code
  *
  * Return: Always 0.
  */
=======
 * main - check the code
 *
 * Return: Always 0.
 */
>>>>>>> 13462e4364d50fae735b4c0eb641ea02f65b802d
int main(void)
{
	int r;
	
	r = factorial(1);
<<<<<<< HEAD
       	printf("%d\n", r);
=======
	printf("%d\n", r);
>>>>>>> 13462e4364d50fae735b4c0eb641ea02f65b802d
	r = factorial(5);
	printf("%d\n", r);
	r = factorial(10);
	printf("%d\n", r);
	r = factorial(-1024);
	printf("%d\n", r);
	return (0);
}
