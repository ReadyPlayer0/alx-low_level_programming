#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to the address of the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (count);

	slow = *h;
	fast = (*h)->next;

	while (slow && fast && fast->next)
	{
		if (slow == fast)
		{
			*h = NULL;
			exit(98);
		}

		slow = slow->next;
		fast = fast->next->next;

		free(slow);
		count++;
	}

	if (slow == fast)
	{
		*h = NULL;
		exit(98);
	}

	if (slow != NULL)
	{
		free(slow);
		count++;
	}

	*h = NULL;
	return (count);
}
