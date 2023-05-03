#include "lists.h"

/**
 * pop_listint - deletes the linked list's head node
 * @head: pointer to the linked list's first element
 * Return: deleted data inside the elements OR 0 if list is empty
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
