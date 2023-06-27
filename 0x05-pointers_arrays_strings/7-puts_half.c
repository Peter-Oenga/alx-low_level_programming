#include <stdio.h>
#include "main.h"
/**
  *puts_half - Prints half of a string
  *
  *@str: Pointer to the string
  *
  * Return: Empty
  */
void puts_half(char *str)
{
	int len = 0;
	int start;

	if (str == NULL)
		return;
	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;
	while (str[start] != '\0')
	{
		putchar(str[start]);
		start++;
	}
	putchar('\n');
}
