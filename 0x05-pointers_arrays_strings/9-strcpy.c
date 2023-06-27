#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies a string
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * Return: Pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	char *dStart = dest;

	if (dest == NULL || src == NULL)
		return (NULL);
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dStart);
}
