#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head node of doubly linked list
 * @index: index of the node, starting from 0
 *
 * Return: pointer to the nth node or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	while (current != NULL && index > 0)
	{
		current = current->next;
		index --;
	}

	if (current != NULL && index == 0)
		return (current);
	else
		return (NULL);
}
