#include "search_algos.h"

/**
 * jump_search - search 
 * @array: array
 * @size: Size 
 * @value: Value 
 * Return: The index 
 */
int jump_search(int *array, size_t size, int value)
{
	int min = 0;
	int sqr = sqrt(size);
	int end = 0;
	int i;


	if (array == NULL || size == 0)
		return (-1);

	while (end < (int)size && array[end] < value)
	{
		printf("Value checked array[%d] = [%d]\n", end, array[end]);
		min = end;
		end += sqr;
	}
	printf("Value found between indexes [%d] and [%d]\n", min, end);
	if (end > ((int)size - 1))
		end = size - 1;

	for (i = min; i <= end && array[i] <= value; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
