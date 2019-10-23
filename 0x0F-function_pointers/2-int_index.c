#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - check match.
 * @array: array check.
 * @size: size of array.
 * @cmp: pointer
 * Return: 0 if false.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	if (array && size > 0 && cmp)
	{
		x = 0;
		for (i = 0; i < size; i++)
		{
			x = cmp(array[i]);
			if (x == 1)
				return (i);
		}
		return (-1);
	}
	return (-1);
}
