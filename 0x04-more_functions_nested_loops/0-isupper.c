#include "main.h"

/**
  *_isupper - Checks and display uppercase
  *@x: Number to be checked
  *Return: 1 is uppercase 0 is lowercase
  */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
