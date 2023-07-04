#include "lists.h"

/**
 * pop_listint - Deletes the head node element of list
 * @head: pointer to head element
 * Return: deleted data inside element, else 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
