#include "main.h"
#include <stdio.h>
<<<<<<< HEAD
/**
  * simple_print_buffer - prints buffer
  * @buffer: the address of memory
  * @size:size of memory to print
  * Return: Nothing
  */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

=======

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;
>>>>>>> 13462e4364d50fae735b4c0eb641ea02f65b802d
	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
<<<<<<< HEAD
		i++
=======
		i++;
>>>>>>> 13462e4364d50fae735b4c0eb641ea02f65b802d
	}
	printf("\n");
}
/**
  * main - check the code
  *
<<<<<<< HEAD
  *
  * Return: Always 0
  *
=======
  * Return: Always 0.
>>>>>>> 13462e4364d50fae735b4c0eb641ea02f65b802d
  */
int main(void)
{
	char buffer[98] = {0x00};

	simple_print_buffer(buffer, 98);
	_memset(buffer, 0x01, 95);
	printf("-------------------------------------------------\n");
	simple_print_buffer(buffer, 98);
	return (0);
}
