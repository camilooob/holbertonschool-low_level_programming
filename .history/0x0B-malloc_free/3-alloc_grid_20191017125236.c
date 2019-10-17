#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - print array.
 * @width: width grid.
 * @height: height grid.
 *
 * Return: double pointer for array.
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	a = malloc(height * sizeof(int *));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(a + i) = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (i = width; i >= 0; i--)
			{
				free(a[i]);
			}
			free(a);
			a = NULL;
			return (a);
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
