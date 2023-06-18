#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - print all alphabe except e q
  *Return: Always 0 (success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i  < 26; i++)
{
	if (alp[i] != 'e' && alp[i] != 'q')
	{
		putchar(alp[i]);
	}
}
	putchar('\n');
	return (0);
}
