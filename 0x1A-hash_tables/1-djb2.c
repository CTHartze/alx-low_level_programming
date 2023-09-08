#include "hash_tables.h"

/**
 * hash_djb2 - Computes hash of 'str' using djb2
 * @str: refers to string to hash
 *
 * Return: 64 bits hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
