#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to head node of doubly linked list
 * @n: integer value for creating new node
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *last_node = NULL;

	if (head == NULL)
		return (NULL);

	last_node = *head;
	while (last_node != NULL && last_node->next != NULL)
		last_node = last_node->next;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = last_node;

	if (*head == NULL)
		*head = new_node;
	else
		last_node->next = new_node;

	return (new_node);
}
