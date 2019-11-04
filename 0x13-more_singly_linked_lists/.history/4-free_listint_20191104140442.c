#include "lists.h"

/**
 *free_listint - free list.
 * @head: head.
 * Return: NA.
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if (head != NULL)
		free_listint(head->next);
	free(head->n);
	free(head);
}
