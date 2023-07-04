#include "lists.h"

/**
 * sum_listint -Sum of data in listint_t list
 * @head: head node in list
 * Return: resulting sum integer value
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
