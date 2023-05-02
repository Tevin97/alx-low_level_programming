#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list and returns its data.
 *
 * @head: A pointer to a pointer to the head of the `listint_t` linked list.
 *
 * Return: The head node's data (n), or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp_node;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	temp_node = *head;
	*head = (*head)->next;
	free(temp_node);

	return (data);
}
