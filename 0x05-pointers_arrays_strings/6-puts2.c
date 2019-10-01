#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - a function that prints a string
 * in reverse, followed by a new line.
 * @s: input string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if(i  % 2 == 0) 
		{
		_putchar(str[i]);
		}
		}
	_putchar('\n');
}
