#include "lists.h"

/**
 * listint_len - returns amount of elements in linked lists
 * @h: listint_t linked list to traverse
 * Return: anmount of nodes
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
