#include "main.h"
/**
  *_strcmp - compares two strings
  *@s1:First string
  *@s2: Second string
  *Return: The compared result
  *
  */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
