#include "lists.h"

/**
 * insert_nodeint_at_index - insert  nth element
 * @head: head of the list
 * @idx: index of where to insert
 * @n: int to insert
 * Return: the node element.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *new_head = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_head = get_nodeint_at_index(new_head, idx);
		if (new_head == NULL)
			return (NULL);
		new_node->next = new_head->next;
		new_head->next = new_node;
	}

	return (new_node);
}

/**
 * get_nodeint_at_index - get nth element
 * @head: head of the list
 * @index: index of element to return
 * Return: the node element.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 1;

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
