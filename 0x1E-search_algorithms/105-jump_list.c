#include "search_algos.h"

/**
 * jump_it - jump 
 * @start: Position
 * @end: How many 
 * Return: The node 
 */
listint_t *jump_it(listint_t *start, int end)
{
	int i;

	for (i = 0; i < end && start->next; i++)
		start = start->next;

	return (start);
}
/**
 * jump_list - search
 * @list: My array
 * @size: Size
 * @value: Value 
 * Return: The index 
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *end = list,  *start = list;
	size_t i;


	if (list == NULL || size == 0)
		return (NULL);

	while (end->n < value && end->next)
	{
		start = end;
		end = jump_it(end, sqrt(size));

		printf("Value checked at index [%ld] = [%d]\n", end->index, end->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
	       start->index, end->index);

	for (i = start->index;
	     i <= end->index && i < size && start->n <= value;
	     i++, start = start->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", i, start->n);
		if (start && start->n == value)
			return (start);
	}

	if (start)
		printf("Value checked at index [%ld] = [%d]\n", i, start->n);

	return (NULL);
}
