#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node, *temp;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];

		while (node)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}
	free(ht->array);
	free(ht);
}
