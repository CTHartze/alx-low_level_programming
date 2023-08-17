#include "lists.h"

/**
 * free_dlistint - dlistint_t list is freed
 * @head: points to list head
 * Return: void
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
