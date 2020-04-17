#include "search_algos.h"

/**
 * linear_search - search a value 
 * @array: array 
 * @size: size 
 * @value: value 
 * Return: The index 
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
