#include "lists.h"

/**
 * listint_len - returns amount of elements in linked list
 * @h: refers to linked list to traverse
 * Return: amount of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
