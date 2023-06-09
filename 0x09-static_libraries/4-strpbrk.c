#include "main.h"
/**
 * _strpbrk - Finds first matching char in strings
 * @s: refers input
 * @accept: sytem call
 * Return: Always 0, on success
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}
