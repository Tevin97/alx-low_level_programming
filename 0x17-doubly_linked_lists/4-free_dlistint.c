#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head node of doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
