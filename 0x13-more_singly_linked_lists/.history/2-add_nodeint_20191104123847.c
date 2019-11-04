#include "lists.h"

/**
 * add_node - print len.
 * @head: list.
 * @str: string.
 * Return: The elements linked.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	int *n = n;
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

		if (newnode == NULL)
		{
			free(newnode);
			return (NULL);
		}
		if (n == NULL)
		{
			newnode->len = 0;
			newnode->next = *head;
			*head = newnode;
			return (newnode);
		}
		else
		{
			newnode->n = puts(n);
			newnode->next = *head;
			*head = newnode;
			return (newnode);
		}
		return (NULL);
}
