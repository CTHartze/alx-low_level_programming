#include "hash_tables.h"

/**
 * hash_table_get - Retrieves value associated with hash table key
 * @ht: refers to hash table
 * @key: refers to key to retrieve value
 *
 * Return: value or NULL if key is not matched.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t  *bucket;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
			return (bucket->value);
		bucket = bucket->next;
	}
	return (NULL);
}
