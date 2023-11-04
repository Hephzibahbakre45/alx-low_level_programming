#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: a pointer to hash table
 * @key: the key to the value in the hash table
 * Return: the NULL value or associated value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL || *key == 48 || key == NULL)
		return (NULL);

	index  = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	for (new_node = ht->array[index];
			new_node && strcmp(new_node->key, key) != 0;
			new_node = new_node->next)
		;
	if (new_node == NULL)
		return (NULL);
	else
		return (new_node->value);
}
