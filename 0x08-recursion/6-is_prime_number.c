#include "main.h"

/**
  *is_prime_number - returns 1 if the input integer is a prime number
  *otherwise return 0
  *@n: int
  *@div: int
  *Return: 1 if prime, 0 otherwise
 */

int check_prime(int n, int div);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
  *check_prime - check all numbers < n if they can divide it
  *@n: int
  *@div: int
  *Return: int
 */

int check_prime(int n, int div)
{
	if (div >= n && n > 1)
		return (1);
	else if (n % div == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, div + 1));
}
