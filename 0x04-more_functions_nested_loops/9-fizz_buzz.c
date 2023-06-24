#include <stdio.h>
#include "main.h"

/**
  *main - entry point
  *description: print the 1 - 100
  *fizz for multiples of 3 and buzz for multiples of 5
  *fizzbuss for multiples of both
  *Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("fizzbuzz");
		else if (i % 3 == 0)
			printf("fizz");
		else if (i % 5 == 0)
			printf("buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
		else
			printf("\n");
			}
	return (0);
}
