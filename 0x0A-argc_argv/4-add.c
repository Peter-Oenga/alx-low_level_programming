#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *
 *
 *
 *
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
