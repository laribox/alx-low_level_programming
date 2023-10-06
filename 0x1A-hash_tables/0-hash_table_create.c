#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: the size of array
 * Return: the address of newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *res = malloc(sizeof(*res));

	return (res);
}

