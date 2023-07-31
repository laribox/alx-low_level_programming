#include "lists.h"

/**
 * get_nodeint_at_index - get nth element
 * @head: head of the list
 * @index: index of element to return
 * Return: the node element.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (index == count)
		{
			return (head);
		}
		head = head->next;
		count++;

	}
	return (NULL);
}
