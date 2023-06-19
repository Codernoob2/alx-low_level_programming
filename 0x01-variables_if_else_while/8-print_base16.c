#include <stdio.h>
/**
  *main - all the numbers of base 16 in lowercase
  *Return: Always 0 (success)
 */
int main(void)
{
	int num;
	char alp;

	for (num = 0; num < 10; num++)
{
	putchar(num + '0');
}
	for (alp = 'a'; alp <= 'f'; alp++)
{
	putchar(alp);
}
	putchar('\n');
return (0);
}
