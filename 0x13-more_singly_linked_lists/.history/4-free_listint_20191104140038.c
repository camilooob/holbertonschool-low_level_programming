#include "lists.h"

/**
 * free_list - free list.
 * @head: head.
 * Return: NA.
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_listint(head->next);
	free(head->str);
	free(head);
}
