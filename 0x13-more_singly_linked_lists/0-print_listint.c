#include "lists.h"

/**
 * print_listint - prints al list elements
 * @h: refers to linked list
 * Return: amount of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
