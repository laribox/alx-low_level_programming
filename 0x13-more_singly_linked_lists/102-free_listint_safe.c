#include "lists.h"

/**
 * free_listint_safe - Realease the memory allocated for a list
 * @h: A pointer to the first node of the list to free
 * Return: size of how many freed nodes
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next_val;
	size_t len = 0;
	int diff;

	if (*h == NULL || h == NULL)
		return (0);


	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			next_val = (*h)->next;
			free(*h);
			*h = next_val;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}

	}

	*h = NULL;

	return (len);
}
