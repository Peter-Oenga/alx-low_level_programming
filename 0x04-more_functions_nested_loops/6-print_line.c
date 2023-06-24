#include "main.h"
/**
  *print_line - Draws a line
  *@n: Number of lines to be drawn
  *Return: Nothin
  */
void print_line(int n)
{
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < n; y++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
