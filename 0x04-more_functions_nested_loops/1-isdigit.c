#include "main.h"

/**
  *_isdigit - checks if the character is a digit
  *@c: character to be checked
  *Return: Always 0 (succes)
 */

int _isdigit(int c)
{
		if (c >= '0' && c <= '9')
		{
			return (1);
		}
		else
		{
		return (0);
		}
	}
