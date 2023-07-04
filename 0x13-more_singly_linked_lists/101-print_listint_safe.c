#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	slow = fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)fast, fast->n);
			exit(98);
		}

		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
	}

	if (slow == fast)
		exit(98);

	if (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
	}

	return (count);
}
