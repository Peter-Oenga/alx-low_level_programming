#include "main.h"

/**
  *_isdigit - Checks for digit
  *@y: Numbers checked
  *Return: 1 is  a digit  0 is a character
  */
int _isdigit(int y)
{
	if (y >= 48 && y <= 57)
	{
		return (1);
	}
	return (0);
}
