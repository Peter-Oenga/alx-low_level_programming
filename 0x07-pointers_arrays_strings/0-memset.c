#include "main.h"
<<<<<<< HEAD

/**
 *_memset - fills memory with a constant byte n amount of times
 *
 *@s: pointer that has the address of the memory to fill
 *@b: constant byte that will be written into the momory
 *@n: amount of times the byte will be written into the memory
 *
 *Return: address of the memory where thebyte was written
=======
/**
 * _memset - function that fills memory with a constant byte
 *@s: first value
 *@b: second value
 *@n: thirth value
 *
 * Return: char with result of memset
>>>>>>> 13462e4364d50fae735b4c0eb641ea02f65b802d
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
