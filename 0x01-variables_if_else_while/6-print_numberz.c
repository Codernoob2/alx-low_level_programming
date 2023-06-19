#include <stdio.h>
/**
  * main - prints all single digit numbers of base 10 starting from 0
  *Return: Always 0 (success)
 */
int main(void)
{
	int sdn;

	for (sdn = 0; sdn < 10; sdn++)
{
	putchar(sdn + '0');
}
	putchar('\n');

return (0);
}
