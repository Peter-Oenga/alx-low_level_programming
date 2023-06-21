#include<unistd.h>
/**
  *_putchar - Displays the contents of file
  *Return: 1 (Success)
  *@c: character to be written
  * -1 error
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
