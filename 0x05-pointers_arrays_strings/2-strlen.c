#include "holberton.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: input string
 * Return: length of string
 */
int _strlen(char *s)
{
char *contador = s;

	while (*s)
	{
		s++;
	}
return (s - contador);
}
