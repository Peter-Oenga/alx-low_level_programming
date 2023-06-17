#include <stdio.h>
/**
  *main - Display alphabets leaving eq
  *
  *Return: Always 0 (Success)
  *
  */
int main(void)
{
	char ls;

	for (ls = 'a'; ls <= 'z'; ls++)
	{
		if (ls != 'q' && ls != 'e')
		{
			putchar(ls);
		}
	}
	putchar('\n');
	return (0);
}
