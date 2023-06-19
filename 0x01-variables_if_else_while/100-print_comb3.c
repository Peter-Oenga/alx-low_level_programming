#include <stdio.h>
/**
  *main - Print combination of two digits
  *
  *Return:Always 0 (Success)
  */
int main(void)
{
	int k;
	int m;

	for (k = 0; k <= 8; k++)
	{
		for (m = k + 1; m <= 9; m++)
		{
			putchar('0' + k);
			putchar('0' + m);
			if (k != 8 || m != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
