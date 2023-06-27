#include "main.h"
#include <stdio.h>
/**
  *_puts - Displays the array to stdout
  *@str: Pointer to array
  *
  *Return: Empty
  *
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
