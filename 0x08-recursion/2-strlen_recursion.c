#include "holberton.h"
/**
  * _strlen_recursion - len string
  * @s: input
  * Return: 0
  */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
