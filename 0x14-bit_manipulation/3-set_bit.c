#include "main.h"

/**
 * set_bit - Sets bit at a given index to 1
 * @n: number to change
 * @index: index of bit to set to 1
 * Return: On success 1, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
