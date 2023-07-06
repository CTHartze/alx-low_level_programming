#include "main.h"

/**
 * clear_bit - Sets bit value to 0
 * @n: number pointer
 * @index: position
 * Return: 1 if successful, -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
