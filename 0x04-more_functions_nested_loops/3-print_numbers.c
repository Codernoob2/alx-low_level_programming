#include "main.h"
#include <stdio.h>

int _putchar(char c);

/**
  *print_numbers - function that prints the numbers, from 0 to 9
  *Return: Always 0 (success)
 */

void print_numbers(void)
{
	char c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
		_putchar('\n');
}
