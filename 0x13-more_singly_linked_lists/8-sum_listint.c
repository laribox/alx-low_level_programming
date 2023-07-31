#include "lists.h"

/**
 * sum_listint - sum of all the data (n)
 * @head: name of the list
 * Return: the sum of n of nodes.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;


	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
