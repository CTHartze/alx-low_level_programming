#include "main.h"

/**
 * get_endianness - checks if the machine is a big or little endian
 * Return: for big 0, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
