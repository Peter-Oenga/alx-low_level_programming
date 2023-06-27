#include "main.h"
/**
  *_strlen - Iterates and display length
  *@s: Pointer to array
  *Return: length of array
  *
  */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
