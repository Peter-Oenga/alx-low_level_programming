#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  *main - Sum of digits
  *@argc: Number count
  *@argv: String array
  *Return: 0 Success, 1 error
  */
int main(int argc, char* argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
