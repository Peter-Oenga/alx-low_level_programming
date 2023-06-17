#include <stdio.h>
/**
  *main - Displaynumbers separated b '
  *
  *Return:Always 0 (Success)
  */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar('0' + x);
	if (x != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('$');
	putchar('\n');
	return (0);
}
