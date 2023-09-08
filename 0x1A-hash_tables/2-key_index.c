#include "hash_tables.h"

/**
 * key_index - Function gets index for key given.
 * @key: string (key) to hash
 * @size: refers to hash table size
 *
 * Return: using djb2 index of 'key'
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
