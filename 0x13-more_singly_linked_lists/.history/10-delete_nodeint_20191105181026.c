#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - delete nodes
* @head: pointer head
* @index: delete index
* Return: 1 if ok.
* -1 if fail.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_ptr;
	listint_t *nxt_ptr;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	nxt_ptr = *head;
	prev_ptr = NULL;
	if (index == 0)
	{
		*head = (*head)->next;
		free(nxt_ptr);
		return (1);
	}
	for (i = 0; i < index; i += 1)
	{
		if (nxt_ptr == NULL)
			return (-1);
		prev_ptr = nxt_ptr;
		nxt_ptr = nxt_ptr->next;
	}
	if (prev_ptr)
		prev_ptr->next = nxt_ptr->next;
	free(nxt_ptr);

	return (1);
}
