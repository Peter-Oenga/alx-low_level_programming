#include "main.h"
/**
  *rot13 - Encodes A string
  *@s: Pointer to the character
  *
  *Return: Encoded string
  */
char *rot13(char *s)
{
	char *p = s;
	int i;


	while (*p != '\0')
	{
		if ((*p >= 'a' && *p <= 'z'))
		{
			for (i = 0; i < 13; i++)
			{
				if (*p == 'z')
				{
					*p = 'a';
				}
				else 
				{
					(*p)++;
				}
			}
		}
		else if ((*p >= 'A' && *p <= 'Z'))
		{
			for (i =0; i < 13; i++)
			{
				if (*p == 'Z')
				{
					*p = 'A';
				}
				else
				{
					(*p)++;
				}
			}
		}
		p++;
	}
	return (s);
}
