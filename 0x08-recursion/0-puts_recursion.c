#include "holberton.h"
/**
  * _puts_recursion - count the characters on a stri
  * @s: a pointer the integer we want to set to 402
  * Return: 0
  */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
	_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
