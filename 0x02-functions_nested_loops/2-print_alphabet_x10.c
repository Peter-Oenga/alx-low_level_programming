#include "main.h"

/**
  * print_alphabet_x10 - Print alphabets
  *
  * Return: void
  */
void print_alphabet_x10(void)
{
	char c = 'a';
	int count = 0;
	int m;
	int j;

	while (count < 260)
	{
		for (j = 0; j < 10; j++)
		{
		for (m = 0; m < 26; m++)
		{
		_putchar(c);
	c++;
	count++;
		}
		}
		_putchar('\n');
	}
}
