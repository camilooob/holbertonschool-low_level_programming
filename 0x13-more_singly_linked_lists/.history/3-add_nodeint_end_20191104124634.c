#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - add node in end of list
* @head: pointer
* @n: data of the node.
* Return: head
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode;
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	endnode = *head;


	while (endnode->next != NULL)
		endnode = endnode->next;
	endnode->next = newnode;

	return (newnode);
}
