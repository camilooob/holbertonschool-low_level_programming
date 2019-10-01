#include "holberton.h"
#include <stdio.h>

/**
 * put2 - a function that prints.
 * @str: input string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
