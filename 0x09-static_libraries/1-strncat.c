#include "main.h"
/**
 * _strncat - Join string with a part of another.
 * @dest: destination pointer
 * @src: source pointer
 * @n: input value pointer
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
