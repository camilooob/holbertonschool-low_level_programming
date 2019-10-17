#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - array of integers.
 * @min: input min.
 * @max: input max.
 *
 * Return: array.
 */
int *array_range(int min, int max)
{
	int *a;
	int i, full;

	full = (min - max);
	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * full);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < full; i++)
	{
		p[i] = min++;
	}
	return (p);
