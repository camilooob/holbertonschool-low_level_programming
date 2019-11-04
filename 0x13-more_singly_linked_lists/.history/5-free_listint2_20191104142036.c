void free_listint2(listint_t **head)
{
	listint_t *liberador;
	while (*head != NULL)
	{
	liberador = *head;
	*head = (*head)->next;
	free(liberador);
	}
}
