#include "hash_tables.h"

/**
 * shash_table_create - function to create a sorted hash table
 * @size: the array size
 * @ht : pointer to size
 * Return: pointer or null
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; ++i)
	{
		ht->array[i] = NULL;
	}
	ht->shead = NULL;
	ht->stail = NULL;

	return (hash_table);
}
void check(shash_table_t *ht, shash_node_t *new_ht,
		shash_node_t *temp_t, const char *key);

/**
 * shash_table_set - insert to sorted hash_table
 * @ht: table
 * @key: key to  be added
 * @value: value of key
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *copy_value;
	shash_node_t *new_ht, *tmp;

	if (ht == NULL || key == NULL || *key == 48 || value == NULL)
		return (0);

	copy_value = strdup(value);
	if (copy_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (tmp = ht->shead; tmp != 0; tmp = tmp->snext)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = copy_value;
			return (1);
		}
	}
	new_ht = malloc(sizeof(shash_node_t));
	if (new_ht == NULL)
	{
		free(copy_value);
		return (0);
	}
	new_ht->key = strdup(key);
	if (new_ht->key == NULL)
	{
		free(copy_value);
		free(new_ht);
		return (0);
	}

	new_ht->value = copy_value;
	new_ht->next = ht->array[index];
	ht->array[index] = new_ht;
	check(ht, new_ht, tmp, key);
	return (1);
}
 /**
  * check - run some checks
  * @ht: par 1
  * @new_ht: par 2
  * @temp_t: par 3
  * @key: par 4
  * Return: none
  */
void check(shash_table_t *ht, shash_node_t *new_ht,
		shash_node_t *temp_t, const char *key)
{

	if (ht->shead == NULL)
	{
		new_ht->sprev = NULL;
		new_ht->snext = NULL;
		ht->shead = new_ht;
		ht->stail = new_ht;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_ht->sprev = NULL;
		new_ht->snext = ht->shead;
		ht->shead->sprev = new_ht;
		ht->shead = new_ht;
	}
	else
	{
		for (temp_t = ht->shead;
		    temp_t->snext != NULL && strcmp(temp_t->snext->key, key) < 0;
		temp_t = temp_t->snext)
		;
		new_ht->sprev = temp_t;
		new_ht->snext = temp_t->snext;
		if (temp_t->snext == NULL)
			ht->stail = new_ht;
		else
			temp_t->snext->sprev = new_ht;
		temp_t->snext = new_ht;
	}
}

/**
 * shash_table_get - get key value from sorted hash_table
 * @ht: the hash table
 * @key: key
 * Return: value or none (if fail)
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL || *key == 48 || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	for (node = ht->shead;
	     node != NULL && strcmp(node->key, key) != 0;
	     node = node->snext)
		;
	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		return (node->value);
	}
}

/**
 * shash_table_print - print a sorted hash table
 * @ht: hash_table to be printed
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (node = ht->shead; node != NULL;
	     node = node->snext)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print sorted hash tablein reverse
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (node = ht->stail; node != NULL;
	     node = node->sprev)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete a sorted hash table
 * @ht: hash_tabe
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *h = ht;
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	for (node = ht->shead; node != 0; node = tmp)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
	}
	free(h->array);
	free(h);
}
