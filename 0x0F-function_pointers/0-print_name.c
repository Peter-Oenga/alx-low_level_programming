#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *print_name - Prints the name
  * @name:Pointer to name
  * @f: Function pointer
  * Return: Nothing
  */
void print_name(char *name, void (*f)(char *))
{
	void (*p)(char *);

	if (name == NULL || f == NULL)
		return;
	p = f;
	p(name);
}
