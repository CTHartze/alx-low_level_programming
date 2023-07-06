#include "main.h"

/**
 * get_endianness - Function checks machine endianness
 * Return: 0 as big endian, 1 as little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
