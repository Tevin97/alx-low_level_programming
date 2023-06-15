#include "lists.h"

/**
 * sum_dlistint - returns sum of all the data(n) of a dlistint_t linked list.
 * @head: pointer to head node of doubly linked list
 *
 * Return: sum of all data values or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
