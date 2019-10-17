#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - funcion lent of String.
 * @str: Input String.
 * Return: length.
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	return (i);
}
/**
 * _strdup - Copy an string.
 * @str: Input String.
 * Return: copy string.
 */
char *_strdup(char *str)
{
	char *a;
	int i, j;

	if (str == NULL)
	{
		return (0);
	}
	else
	{
		i = _strlen(str);
		a = malloc(i * sizeof(char) + 1);
		if (a == NULL)
			return (0);
		for (j = 0; str[j] != '\0'; j++)
		{
			a[j] = str[j];
		}
		return (a);
	}
}
