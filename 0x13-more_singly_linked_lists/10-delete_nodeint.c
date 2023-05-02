#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position.
 *
 * @head: A pointer to the head of the `listint_t` linked list.
 * @index: The index of the node to be deleted (starting at 0).
 *
 * Return: 1 if the deletion succeeded, or -1 if it failed
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head;
	listint_t *previous_node = NULL;
	unsigned int i;

	if (current_node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	for (i = 0; i < index && current_node != NULL; i++)
	{
		previous_node = current_node;
		current_node = current_node->next;
	}

	previous_node->next = current_node->next;
	free(current_node);

	return (1);
}
