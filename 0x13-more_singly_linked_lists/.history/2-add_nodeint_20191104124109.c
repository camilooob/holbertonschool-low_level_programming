
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - adds a node at the beginning of a list
* @head: a pointer to a pointer to a linked list
* @n: holds the data for the node
* Return: a pointer to head
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = newnode;

	return (*head);
}
