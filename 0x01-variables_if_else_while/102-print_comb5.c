#include <stdio.h>
/**
  *main - Print double number digits
  *
  *
  *Return: Always 0 (Success)
  *
  */
int main(void)
{
	int n;
	int m;

	for (n = 0; n <= 99; n++)
	{
		for (m = n + 1; m <= 99; m++)
		{
			putchar('0' + (n / 10));
			putchar('0' + (n % 10));
			putchar(' ');

			putchar('0' + (m / 10));
			putchar('0' + (m % 10));
			if (n != 99 || m != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
