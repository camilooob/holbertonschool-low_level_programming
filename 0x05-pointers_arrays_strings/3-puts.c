#include "holberton.h"
#include <stdio.h>

/**
 * _puts - print string
 * @str: input string
 */
void _puts(char *str)
{
	while (*str)
	{
		if (_putchar(*str++) == EOF)
			break;
	}
	if (_putchar('\n') == EOF)
		_putchar(*str);
}
