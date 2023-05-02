#include "lists.h"

/**
 * free_listint - Frees a `listint_t` list.
 *
 * @head: A pointer to the head of the `listint_t` list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head != NULL)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);

	}
}
