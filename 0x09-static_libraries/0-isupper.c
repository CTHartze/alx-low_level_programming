#include "main.h"

/**
 * _isupper - Checks if char is uppercase.
 * @c: refers to char to check
 * Return: 0 otherwise 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
