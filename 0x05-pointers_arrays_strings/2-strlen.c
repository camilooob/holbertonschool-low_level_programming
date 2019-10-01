/**
 * _strlen - reverse a string
 * @s: first integer
 * Return: string
 */
#include "holberton.h"
int _strlen(char *s)
{
char contador = 0;

	while (*s)
	{
		contador++;
		s++;
	}
return (contador);
}
