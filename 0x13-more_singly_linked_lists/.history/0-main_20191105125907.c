#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint - prints every node in a linked list and returns the number of
* nodes
* @h: holds the head to the linked list
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t nodeCount;
	const listint_t *nxt_ptr;

	nxt_ptr = h;
	nodeCount = 0;

	while (nxt_ptr != NULL)
	{
		printf("%i\n", nxt_ptr->n);
		nodeCount += 1;
		nxt_ptr = nxt_ptr->next;
	}

	return (nodeCount);
}
