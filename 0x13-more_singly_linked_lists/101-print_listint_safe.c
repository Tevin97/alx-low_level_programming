#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr = head, *prev = NULL;
	size_t count = 0;

	if (head == NULL)
		exit(98);

	while (curr != NULL)
	{
		printf("[%p] %d\n", (void *) curr, curr->n);
		count++;
		prev = curr;
		curr = curr->next;

		if (curr >= prev)
			break;
	}

	if (curr != NULL && curr >= prev)
	{
		printf("-> [%p] %d\n", (void *) curr, curr->n);
		exit(98);
	}

	return (count);
}
