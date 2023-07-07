#include <stdio.h>
#include "main.h"
 /*_print_rev_recursion - Reverse a string
  *@s: pointer to string
  *
  *Return: 1 Success. - 1 0n error
  *
  */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar (*s);
	}
}
