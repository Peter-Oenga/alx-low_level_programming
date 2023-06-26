#include <unistd.h>
#include "main.h"

/**
  *_putchar - Displays the characters
  *@c: Character to be written
  *Return: 1 (Success)
  * -1 error
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

