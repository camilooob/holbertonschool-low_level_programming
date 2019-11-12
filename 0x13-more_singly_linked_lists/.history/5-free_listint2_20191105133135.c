#include "lists.h"

/**
 *free_listint2 - free list.
 * @head: head.
 */

void free_listint2(listint_t **head)
{
	listint_t *liberador;

	if (!head)
		return;

	while (*head != NULL)
	{
		liberador = *head;
		*head = (*head)->next;
		free(liberador);
	}
}
