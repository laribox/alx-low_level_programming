#include "lists.h"

/**
 * delete_nodeint_at_index - delete nth element of list
 * @head: A pointer to the first node of the list to free
 * @index: index of element to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new_head = *head;
	listint_t *tmp;


	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{

		*head = (*head)->next;
		free(new_head);
		return (1);
	}
	else
	{
		new_head = get_nodeint_at_index(new_head, index);
		if (new_head == NULL)
			return (-1);
		tmp = new_head->next;
		new_head->next = tmp->next;
		free(tmp);
	}


	return (1);
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
