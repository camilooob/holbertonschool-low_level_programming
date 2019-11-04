#include "lists.h"

/**
 * print_list - print list.
 * @h: list.
 * Return: The elements linked.
 */
size_t print_listint(const listint_t *h)
{
int i = 0;

	while (h != NULL)
	{
		if (*h->n == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d]", h->n);
			h = h->next;
		}
		i++;
	}
	return (i);
}
