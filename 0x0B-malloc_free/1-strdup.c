#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _len - make array with malloc.
 * @str: str.
 * Return: Array.
 */
char _len(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{}
	return (i);
}
/**
 * _strdup - make array with malloc.
 * @str: str
 * Return: Array.
 */
char *_strdup(char *str)
{
char *a;
int j = 0;
int i = 0;
if (str == NULL)
{
return (0);
}
else
{
j = _len(str);
a = malloc(sizeof(str) + 1 * j);
if (a == NULL)
{
	return (0);
}
for (i = 0; str[i] != '\0'; i++)
{
	a[i] = str[i];
}
return (a);
}
}
