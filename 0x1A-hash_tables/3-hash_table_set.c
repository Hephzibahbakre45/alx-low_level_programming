#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: he hash table you want to add or update the key/value to
 * @key: The key to add
 * @value: The value of the key
 * Return: 1 on success, 0 if failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *copy_value;
	unsigned long int index, i;
	hash_node_t *new;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	copy_value = strdup(value);
	if (copy_value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy_value;
			return (1);
		}

	}
	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
	{
		free(copy_value);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = copy_value;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
