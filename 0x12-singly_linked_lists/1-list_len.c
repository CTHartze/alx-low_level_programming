#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns amount of elements in a linked list
 * @h: refers to list_t list
 * Return: amount of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
