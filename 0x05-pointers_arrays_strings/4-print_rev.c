#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - a function that prints a string
 * in reverse, followed by a new line.
 * @s: input string
 */

void print_rev(char *s)
{
	int i;
	int largo;

	largo = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		largo++;
	}
	for (i = largo - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
