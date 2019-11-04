#include "lists.h"

/**
 * listint_len - print len.
 * @h: list.
 * Return: The elements linked.
 */
size_t listint_len(const listint_t *h)
{
int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
