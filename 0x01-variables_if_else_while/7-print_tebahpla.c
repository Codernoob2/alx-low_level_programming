#include <stdio.h>
/**
  *main - prints the lowercase alphabet in reverse
  *Return: Always 0 (success)
 */
int main(void)
{
	int alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}

	putchar('\n');

return (0);
}
