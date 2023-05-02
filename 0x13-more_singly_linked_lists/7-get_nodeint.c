#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a `listint_t` linked list.
 *
 * @head: A pointer to the head of the `listint_t` linked list.
 * @index: The index of the desired node (starting at 0).
 *
 * Return: A pointer to the desired node, or NULL if it doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	for (i = 0, node = head; node != NULL && i < index; i++, node = node->next)
		continue;

	return (i == index ? node : NULL);
}
