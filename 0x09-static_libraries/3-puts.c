#include "main.h"
/**
 * _puts - Writes string, succeeded by a new line
 * to stdout
 * @str: refers to string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
