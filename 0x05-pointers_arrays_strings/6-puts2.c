#include "main.h"
#include <stdio.h>
/**
  *puts2 - Prints other characters of a string
  *
  *@str: Pointer to the string
  *
  *Return: Empty
  *
  */
void puts2(char *str)
{
	int i = 0;


	if (str == NULL)
		return;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
