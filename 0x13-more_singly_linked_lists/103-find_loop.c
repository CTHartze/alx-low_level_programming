#include "lists.h"

/**
 * find_listint_loop - Finds loop in a linked list
 * @head: linked list to be search
 * Return: address of node where the loop begins, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);
	while (slow && fast && fast->next)
	{
		fast = fast->next;
		slow = slow->next;
		if (fast == slow)
		{
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);
}
