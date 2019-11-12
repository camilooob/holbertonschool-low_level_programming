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
	listint_t *prev;
	listint_t *prox;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	prox = *head;
	prev = NULL;
	if (index == 0)
	{
		*head = (*head)->next;
		free(prox);
		return (1);
	}
	for (i = 0; i < index; i += 1)
	{
		if (prox == NULL)
			return (-1);
		prev = prox;
		prev = prox->next;
	}
	if (prev)
		prev->next = prox->next;
	free(prox);

	return (1);
}
