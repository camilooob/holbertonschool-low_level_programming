#include "search_algos.h"

/**
 * print_array_new - print 
 * @array: The sort 
 * @left: min 
 * @right: max 
 * Return: Nothing
 */
void print_array_new(int *array, int left, int right)
{
	int i;

	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}

/**
 * recursive_search - binary
 * @array: The sort
 * @low: min
 * @high: max
 * @value: Target
 * Return: Nothing
 */
int recursive_search(int *array, int low, int high, int value)
{
	int mid = 0;

	if (low > high)
		return (-1);

	printf("Searching in array: ");
	print_array_new(array, low, high);


	if (value == array[high] && low == high)
		return (high);

	if (low == high && value != array[high])
		return (-1);

	mid = low + (high - low) / 2;

	if ((mid == low || value != array[mid - 1]) && array[mid] == value)
		return (mid);

	if (value <= array[mid])
		return (recursive_search(array, low, mid, value));

	return (recursive_search(array, mid + 1, high, value));
}

/**
 * advanced_binary - seacrh
 * @array: the sort 
 * @size: size
 * @value: value
 * Return: The index 
 */
int advanced_binary(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int index = recursive_search(array, low, high, value);

	return (index);
}
