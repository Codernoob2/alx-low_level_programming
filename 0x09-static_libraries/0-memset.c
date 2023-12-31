#include "main.h"

/**
  * _memset - fills memory with a constant byte
  *@s: memory area
  *@b: constant byte
  *@n: memory filled
*Return: the pointer to dest
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
