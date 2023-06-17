#include <stdio.h>
/**
  *main - Display Hexadecimal
  *
  *Return:Always 0 (Success)
  */
int main(void)
{
	int n;
	char c;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}
	for (c = 'a'; c <= 'f' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
