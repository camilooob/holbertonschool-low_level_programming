#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - make array with malloc.
 * @size: size.
 * @c: c.
 * Return: Array.
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;
	a = malloc(size * sizeof(c));
	if (a == NULL || size == 0)
	{
		return (0);
	}
	for (i = 0; i <= size; i++)
	{
		a[i] = c;
	}
	return (a);
}
