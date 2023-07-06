#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes char c to stdout
 * @c: refers to character to print
 * Return: 1 when successful, -1 when fails
 * and errno is set aptly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
