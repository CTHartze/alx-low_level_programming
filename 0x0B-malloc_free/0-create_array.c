#include "main.h"
#include <stdlib.h>

/**
 * create_array - Array is created from index list.
 * @size: array size pointer
 * @c: refers to char to assign
 * Description: create array size and assign char c
 * Return: array pointer, or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
