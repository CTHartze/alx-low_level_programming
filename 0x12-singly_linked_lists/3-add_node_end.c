#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds new node at end of linked list
 * @head: ref double pointer to list_t list
 * @str: refers string to put in new node
 * Return: new element address, else NULL if fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
