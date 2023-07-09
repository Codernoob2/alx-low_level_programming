#include "main.h"

/**
  *_islower -  checks for lowercase character
  *@c: The character to be checked
  *Return: Always 0 (success)
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);	/* c is a lower case character */
	}
	else
	{
		return (0);	/* c is not a lower case character */
	}
}
