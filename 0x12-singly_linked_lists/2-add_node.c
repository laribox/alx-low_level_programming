#include "lists.h"

/**
 * add_node - add a new node at beginning of a list_t list.
 * @head: head of a list_t list.
 * @str: value to insert into element.
 * Return: the number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	new_head = malloc(size_of(list_t));
	if (new_head == NULL)
		return (NULL);

	new_head->str = strdup(str);
	new_head->len = _strlen(str);
	new_head->next = *head;

	*head = new_head;
	return (new_head);
}

/**
 * _strlen - Calculates the length of a string.
 * @str: String to count.
 *
 * Return: Length of the string.
 */
unsigned int _strlen(const char *str)
{
	if (!*str)
		return (0);
	return (1 + _strlen(str + 1));
}
