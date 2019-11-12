#include "lists.h"

/**
 * print_listint - print list.
 * @h: list.
 * Return: The elements linked.
 */
size_t print_listint(const listint_t *h)
{
	size_t i;
	const listint_t *next_node;

	next_node = h;
	i = 0;

	while (next_node != NULL)
	{
		printf("%i\n", next_node->n);
		i += 1;
		next_node = next_node->next;
	}

	return (i);
}


