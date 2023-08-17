#include "lists.h"

/**
 * get_dnodeint_at_index - dlistint_t linked lists nth node is returned
 * @head: points to list head
 * @index: node index to search, from 0
 * Return: NULL or nth node
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
