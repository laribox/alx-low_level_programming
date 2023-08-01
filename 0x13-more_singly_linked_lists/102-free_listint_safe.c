#include "lists.h"

/**
 * free_listint_safe - Realease the memory allocated for a list
 * @h: A pointer to the first node of the list to free
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next_val;

	if (head == NULL)
		return;


	while (*h)
	{
		next_val = (*h)->next;
		free(*h);
		*h = next_val;
	}
}
