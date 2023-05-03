#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listinit_safe - Prints a listint_t linked list safely
 * @head: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp;
	size_t count = 0;

	temp = head;
	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;
		if (temp <= temp->next)
		{
			printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
			break;
		}
		temp = temp->next;
	}

	if (temp == NULL)
		return (count);
	else
		exit(98);
}
