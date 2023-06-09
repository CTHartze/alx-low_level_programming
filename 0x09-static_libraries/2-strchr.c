#include "main.h"
#include <stddef.h>

/**
 * _strchr - Finds first instance of specific char
 * in original string.
 * @s: input pointer
 * @c: input pointer
 * Return: Always 0, on success
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
