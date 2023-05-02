#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely
 * @h: Pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *curr = *h, *next = NULL;
	size_t count = 0;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		count++;

		if (next >= curr)
			break;

		curr = next;
	}

	*h = NULL;

	return (count);
}
