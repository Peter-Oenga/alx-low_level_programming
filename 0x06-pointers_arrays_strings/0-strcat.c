#include "main.h"
/**
  *_strcat - Concatenate two strings
  *@dest: The destination string
  *@src: Source string
  *Return: The final String
  */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int j;

	while (dest[len] != '\0')
		len++;
	/* Concatenate the source to the destination */
			for (j = 0; src[j] != '\0'; j++)
			{
				dest[len++] = src[j];
			}
			/*Add the terminating  null nyte */
			dest[len] = '\0';
			return (dest);
}
