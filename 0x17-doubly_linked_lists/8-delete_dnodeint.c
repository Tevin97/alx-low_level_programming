#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of dlistint_t linked list.
 * @head: pointer to head node of doubly linked list
 * @index: index of the node to delete
 *
 * Return: 1 if the node was successfully deleted, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index - 1; ++i)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next;

	current->next = temp->next;
	if (temp->next)
		temp->next->prev = current;
	free(temp);

	return (1);
}
