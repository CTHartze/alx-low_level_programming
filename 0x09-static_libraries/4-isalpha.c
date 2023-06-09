#include "main.h"

/**
 * _isalpha - Checks if char is alphabetic.
 * @c: character pointer
 * Return: 1 when c is a letter, else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
