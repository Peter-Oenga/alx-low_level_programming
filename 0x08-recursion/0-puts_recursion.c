#include <stdio.h>
#include "main.h"
/**
  * _puts_recursion - Prints a string
  *@s: Address of string
  *Return: Nothing
  *
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		fputchar('\n');
		return;
	}
	fputchar (*s);
	_puts_recursion(s + 1);
}
