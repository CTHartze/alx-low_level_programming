#include <unistd.h>

/**
 * _putchar - Function writes c char to stdout
 * @c: refers to char to print
 * Return: 1 on success, -1 on error and errno is set aptly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
