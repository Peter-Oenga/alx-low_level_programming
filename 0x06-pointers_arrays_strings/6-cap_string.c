#include "main.h"
#include <ctype.h>
/**
  *cap_string - Capitalizes strings
  *@str: Pointer to the string
  *
  *Return: Capitalized string
  */
char *cap_string(char *str)
{
	int cn = 1;
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (cn && islower(*ptr))
		{
			*ptr = toupper(*ptr);
		}
		cn = 0;
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' ||
				*ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' ||
				*ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' ||
				*ptr == '}')
		{
			cn = 1;
		}
		ptr++;
	}
	return (str);
}
