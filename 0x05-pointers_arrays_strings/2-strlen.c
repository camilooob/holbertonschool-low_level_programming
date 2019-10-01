/**
 * _strlen - reverse a string
 * @s: first integer
 * Return: string
 */
#include "holberton.h"
int _strlen(char *s)
{
const char *p = s;

	while (*s)
		++s;
	return (s - p);
}
