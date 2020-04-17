#include "search_algos.h"

/**
 * interpolation_search - search 
 * @array: The sort
 * @size: Size 
 * @value: Value 
 * Return: The index 
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int pos;

	if (array == NULL)
		return (-1);

	while (array[high] != array[low])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));

		if (pos > (int)size)
		{
			printf("Value checked array[%d] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);

		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}

	if (value == array[low])
		return (low);
	else
		return (-1);
}
