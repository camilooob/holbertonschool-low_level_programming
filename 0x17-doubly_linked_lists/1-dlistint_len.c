#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - add node for list
 * @head: head of double list
 * @n: input 
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}

