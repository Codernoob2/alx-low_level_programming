#include <stdlib.h>
#include <time.h>
/**
  *main - Entry point
  *Return: Always 0 (success)
  */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if (n > 0)
	printf("%i is positive", n);
else if (n == 0)
	printf("%i is zeo", n);
else
	printf("%i is negative", n);

	return (0);
}