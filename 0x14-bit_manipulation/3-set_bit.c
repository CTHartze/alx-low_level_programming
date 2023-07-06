#include "main.h"

/**
 * set_bit - Sets bit value at given index to 1
 * @n: pointer to number
 * @index: refers to index of bit
 * Return: 1 if successful, -1 if failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
