#include "holberton.h"
#include <stdio.h>

/**
 * _len - Give me the length of my string.
 * @s: My string.
 * Return: Len Of my string.
 */
int _len(char *s)
{
	if (*s == '\0')
	{
		return (0);

	}
	s++;
	return (_len(s) + 1);
}
/**
 * _comparador - check the code for Holberton School students.
 * @s: My string.
 * @l: Len for compares after.
 * Return: Always 0.
 */
int _comparador(char *s, int l)
{
	if (*s != s[l])
	{
		return (0);
	}
	else if (*s == '\0')
		return (1);
	return (_comparador(s + 1, l - 2));
}
/**
 * is_palindrome - If the string is palindrome make macth.
 * @s: My string.
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	int a, b;

	a = _len(s);
	b = _comparador(s, a - 1);
	return (b);
}
