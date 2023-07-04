#include "lists.h"

/**
 * add_nodeint - adds listint_t node at top of linked list
 * @head: pointer to head struct
 * @n: data to input in new node
 * Return: pointer to new list head, else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
