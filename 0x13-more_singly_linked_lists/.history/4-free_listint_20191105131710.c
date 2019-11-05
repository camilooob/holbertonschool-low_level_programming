#include "lists.h"

/**
 *free_listint - free list.
 * @head: head.
 */
void free_listint(listint_t *head)
{
	listint_t *liberador;

	while (head != NULL)
	{
	liberador = head;
	head = head->next;
	free(liberador);
	}
}
