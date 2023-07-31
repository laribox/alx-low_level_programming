#include "lists.h"

/**
 * add_nodeint - add a new node at beginning of a list_t list.
 * @head: head of a list_t list.
 * @n: value to insert into element.
 * Return: the number of nodes.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->next = *head;

	*head = new_head;
	return (new_head);
}
