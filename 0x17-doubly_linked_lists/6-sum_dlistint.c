#include "lists.h"

/**
 * sum_dlistint - Sum of all (n) data from doubly linked list is returned
 * @head: points to list head
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
