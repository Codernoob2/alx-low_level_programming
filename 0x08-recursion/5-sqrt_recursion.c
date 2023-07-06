#include "main.h"

/**
  *_sqrt_recursion - return natural square of root of number
  *@n: int
  *Return: int
  */


int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  *_sqrt - _sqrt_recursion
  *@n: int
  *@i: square root
  *Return: sqrt
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);

	return (_sqrt(n, i + 1));
}
