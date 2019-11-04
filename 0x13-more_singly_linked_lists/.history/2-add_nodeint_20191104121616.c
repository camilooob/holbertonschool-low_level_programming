#include "lists.h"

/**
 * add_nodeint - print len.
 * @head: list.
 * @str: string.
 * Return: The elements linked.
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

		if (newnode == NULL)
		{
			free(newnode);
			return (NULL);
		}
		if (n == NULL)
		{
			newnode->n = 0;
			newnode->next = *head;
			*head = newnode;
			return (newnode);
		}
		else
		{
			if (newnode->n == NULL)
			{
				free(newnode);
				return (NULL);
			}
			*head = newnode;
			return (newnode);
		}
		return (NULL);
}
