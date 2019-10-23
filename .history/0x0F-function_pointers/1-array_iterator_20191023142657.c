#include <stddef.h>
/**
 * array_iterator - function that prints name
 * @array: array
 * @size: size
 * @action: action
 *
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((array == NULL) || (size == 0) || (action == NULL))
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
