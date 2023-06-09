#include "main.h"

/**
 * _strstr - Finds matching strings,
 * finding needle in a haystack
 * @haystack: ref input
 * @needle: ref input
 * Return: Always 0, on success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
