#include "lists.h"

/**
 * sum_listint - sum list.
 * @head: head.
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
unsigned int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
