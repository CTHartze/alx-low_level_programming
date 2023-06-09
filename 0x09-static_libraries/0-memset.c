#include "main.h"
/**
 * _memset - Fills block of memory with set value.
 * @s: refers to starting address of memory
 * @b: refers to desired value
 * @n: refers to number of bytes
 * Return: New array with value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
