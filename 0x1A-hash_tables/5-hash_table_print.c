#include "hash_tables.h"

/**
 * hash_table_print - print the hash table
 * @ht: hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t  *bucket;
	int not_end = 0;

	if (!ht)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		bucket = ht->array[index];
		while (bucket)
		{
			if (not_end)
				printf(", ");
			printf("'%s': '%s'", bucket->key, bucket->value);
			not_end = 1;
			bucket = bucket->next;
		}
	}
	printf("}\n");
}
