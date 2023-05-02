#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: double pointer to head node of the list
 *
 * Return: Pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *curr_node = *head;

	while (curr_node != NULL)
	{
		listint_t *next_node = curr_node->next;

		curr_node->next = prev_node;
		prev_node = curr_node;
		curr_node = next_node;
	}

	*head = prev_node;
	return (*head);
}
