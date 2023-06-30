#include <stdio.h>
#include "main.h"
/**
  *leet - Replaces characters with leet
  *@str: Pointer to the string
  *
  *
  *Return: String with leet equivalents
  */
char *leet(char *str)
{
	int i;
	char *ptr = str;
	char leetChars[] = "aAeEoOtTlL";
	char leetCodes[] = "43071";


	while (*ptr)
	{
		for (i = 0; leetChars[i]; i++)
		{
			if (*ptr == leetChars[i])
			{
				*ptr = leetCodes[i / 2];
				break;
			}
		}
		ptr++;
	}
	return (str);
}
