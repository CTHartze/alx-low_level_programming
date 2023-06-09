#include <stdio.h>
#include "main.h"

/**
 * _putchar - Writes char c to stdout.
 * @c: refers to character to print
 * Return: 1 on success, OR -1 n error and errno is set aptly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
