#include "lists.h"

/**
 * print_listint_safe - print the node elements safely
 * @head: name of the list
 * Return: the number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	const listint_t *new_head = head;

  if (head == NULL)
    exit(98);

	while (head)
	{
		if (count > 0 && new_head == head)
		{
			exit(98);
		}
		printf("[%p] %d\n",(void *)head, head->n);
		count++;
		head = head->next;
	}
	return (count);
}
