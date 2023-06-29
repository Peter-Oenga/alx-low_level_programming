#include "main.h"
/**
  *string_toupper - Changes to upper case
  *@str: Pointer to string
  *Return: Value in the pointer
  *
  *
  */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (islower(*ptr))
		{
			*ptr = toupper(*ptr);
		}
		ptr++;
	}
	return (str);
}
