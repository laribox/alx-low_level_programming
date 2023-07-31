#include "lists.h"

/**
 * pop_listint - delete first element of list
 * @head: A pointer to the first node of the list to free
 * Return: value of n of the listint_t
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head = (*head)->next;
	int n = (*head)->n;

	free(*head);
	*head = new_head;
	return (n);
}
