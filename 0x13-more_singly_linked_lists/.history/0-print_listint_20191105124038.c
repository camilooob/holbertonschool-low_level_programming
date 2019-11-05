#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print list.
 * @h: list.
 * Return: The elements linked.
 */
size_t print_listint(const listint_t *h)
{
int i = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
			h = h->next;
		i++;
	}
	return (i);
}
