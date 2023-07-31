#include "lists.h"

/**
 * listint_len - get the length of list
 * @h: name of the list
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
