#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: a pointer to the hash table to be printed
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *new_node;
	unsigned char flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag)
				printf(", ");
			new_node = ht->array[i];
			while (new_node != NULL)
			{
				printf("'%s': '%s'",
						new_node->key,
						new_node->value);
				new_node = new_node->next;
				if (new_node != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}

	printf("}\n");
}
