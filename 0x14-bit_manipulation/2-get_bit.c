#include "main.h"

/**
 * get_bit - Returns value of bit at given index
 * @n: number pointer
 * @index: refers to bit
 * Return: bit value at at index, else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
