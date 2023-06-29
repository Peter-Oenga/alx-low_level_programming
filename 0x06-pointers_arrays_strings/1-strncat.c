#include "main.h"
/**
  * _strncat - Concatenates n bytes
  *@dest: The destination string
  *@src: The source string
  *@n: Maximum number of bytes
  *Return: Pointer to the destination
  */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	while (dest[len] != '\0')
		len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len++] = src[i];

	dest[len] = '\0';
	return (dest);
}
