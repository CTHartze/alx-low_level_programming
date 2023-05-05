#include "main.h"

/**
 * clear_bit - sets value of given bit to 0
 * @n: the number to change
 * @index: pointer to index of the bit to clear
 * Return: On success 1, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
