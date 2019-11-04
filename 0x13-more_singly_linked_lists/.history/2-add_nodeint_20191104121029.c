#include "lists.h"

/**
 * _strlen - a function that returns the length of a string.
 * @str: input string
 * Return: length of string
 */
int _strlen(const char *str)
{
int contador = 0;

	while (str[contador] != '\0')
	{
		contador++;
	}
return (contador);
}
/**
 * add_nodeint - print len.
 * @head: list.
 * @str: string.
 * Return: The elements linked.
 */

list_t *add_node(list_t **head, const char *str)
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
			newnode->n = strdup(n);
			if (newnode->n == NULL)
			{
				free(newnode);
				return (NULL);
			}
			newnode->n = _strlen(n);
			newnode->next = *head;
			*head = newnode;
			return (newnode);
		}
		return (NULL);
}
