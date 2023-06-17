#include <stdio.h>
/**
  *main - Display lower case in reverse
  *
  *Return:Always 0 (Success)
  */
int main(void)
{
	char r;

	for (r = 'z'; r >= 'a'; r--)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
