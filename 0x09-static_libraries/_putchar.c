#include <unistd.h>


/**
 * _putchar - Writes character to stdout.
 * @c: refers to character to print
 * Return: 1 on success, OR -1 on error and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
