#include <stdio.h>
/**
  *main - Display numbers using putchar()
  *
  *Return:Always 0 (Success)
  */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
