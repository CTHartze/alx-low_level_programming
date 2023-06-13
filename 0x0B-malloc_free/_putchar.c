#include "main.h"
#include <unistd.h>

/**
 * _putchar - Write char to stdout.
 * @c: refers to character to print
 * Return: 1 on success,-1 on error,
 * and errno is set aptly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
