#include "main.h"

/**
  *rev_string - revers a string
  *@s: char to check
  *_putchar - print each character
  *
  *Description: this will reverse a string
  *Return : 0 success
  */

void rev_string(char *s)
{
	int a = 0, b, c;
	char d;

	while (s[a] != '\0')
	{
		a++;
	}
		c = a - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
	}
}
