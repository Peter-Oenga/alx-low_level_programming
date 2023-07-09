#include <stdio.h>
#include <stdlib.h>
/**
  *main - Multiply arguments
  *@argc: Number of arguments
  *@argv: Array of strings
  *Return: Always 0 Success
  *
  */
int main(int argc, char *argv[])
{
	int i;
	int result = 1;

	if (argc >= 2)
	{
	for (i = 1; i < argc; i++)
	{
		int r = strtol(argv[i], NULL, 10);
		result = result * r;
	}
	printf("%d\n", result);
	}
	else if (argc < 2)
	{
		printf("Error");
	}
	return (0);
}
