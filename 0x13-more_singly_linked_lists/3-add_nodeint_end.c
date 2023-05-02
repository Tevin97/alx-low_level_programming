#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a `listint_t` list.
 *
 * @head: A pointer to a pointer to the head of the `listint_t` list.
 * @n: The integer data for the new node.
 *
 * Return: On success - a pointer to the newly added element. Else - NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp_node = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp_node->next != NULL)
		temp_node = temp_node->next;

	temp_node->next = new_node;

	return (new_node);
}
