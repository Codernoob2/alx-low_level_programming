#include "main.h"

/**
  *_strlen_recursion - returns the length of a string
  *@s: pointer to string
  *Return: int
 */

int _strlen_recursion(char *s)
{
	int lnt = 0;

	if (*s > '\0')
	{
		lnt += _strlen_recursion(s + 1) + 1;
	}
	return (lnt);
}
