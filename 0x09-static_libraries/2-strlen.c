#include "main.h"

/**
 * _strlen - Calc length of given string
 * @s: string pointer
 * Return: length value
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
