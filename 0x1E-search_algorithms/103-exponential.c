#include "search_algos.h"

/**
 * print_array - print
 * @array: The sort 
 * @left: min 
 * @right: max
 * Return: Nothing
 */
void print_array(int *array, int left, int right)
{
	int i;

	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}
/**
 * binary_search_new - seacrh dividin
 * @array: the sort 
 * @left: min 
 * @right: max 
 * @value: value 
 * Return: The index
 */
int binary_search_new(int *array, int left, int right, int value)
{
	int i = 0;

	while (left <= right)
	{
		printf("Searching in array: ");
		print_array(array, left, right);
		i = (left + right) / 2;
		if (array[i] < value)
			left = i + 1;
		else if (array[i] > value)
			right = i - 1;
		else
			return (i);
	}
	return (-1);
}

/**
 * exponential_search - search by half
 * @array: The sort array
 * @size: Size of the array
 * @value: Value to search into the array
 * Return: The index of the value or -1 if it fails
 */
int exponential_search(int *array, size_t size, int value)
{
	int bound = 1;
	int max;

	if (size == 0 || array == NULL)
		return (-1);

	while (bound < (int)size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	if (((int)size - 1) < bound)
		max = size - 1;
	else
		max = bound;

	printf("Value found between indexes [%d] and [%d]\n", bound / 2, max);

	return (binary_search_new(array, bound / 2, max, value));
}
