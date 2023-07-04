#include "lists.h"

/**
 * get_nodeint_at_index - Returns node at specific index in list
 * @head: refers to list head
 * @index: index to return
 * Return: requested node pointer, else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
