#include "hash_tables.h"

/**
* hash_djb2 -  hash function implementing the djb2 algorithm
* @str: string used for hash
* Return: hash value
**/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int i;

	hash = 5381;
	while ((i = *str++))
	{
		hash = ((hash << 5) + hash) + i; /* hash * 33 + i */
	}
	return (hash);
}
