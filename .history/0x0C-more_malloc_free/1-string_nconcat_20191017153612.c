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
	char *a;
	int lens1, lens2, j, i, f;
	unsigned int d = n;
	unsigned int ulens2 = lens2;
	unsigned int e;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lens1 = _strlen(s1);
	lens2 = _strlen(s2);
	a = malloc(((lens1) + (lens2) + 1) * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (j = 0; j < lens1; j++)
	{
		a[j] = s1[j];
	}

	if (d >= ulens2)
	{
		for (i = lens1, f = 0; f <= lens2; i++, f++)
		{
			a[i] = s2[f];
		}
	}
	else
	{
		for (i = lens1, e = 0; e <= d; i++, e++)
		{
			a[i] = s2[e];
		}
	}
	return (a);
}
