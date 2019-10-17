#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Len string.
 * @str: My string.
 * Return: Length.
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - unction that concatenates two strings.
 * @s1: input.
 * @s2: input.
 * @n: input.
 * Return: Output.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
}
