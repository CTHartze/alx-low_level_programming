#include <stdio.h>
#include "main.h"

/**
 * main - Where program execution starts.
 * @argc: number of cmd line arguments
 * @argv: vector of C arrays
 * Return: Always 0, on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
