#include <stdio.h>
#include "main.h"

/**
 * main - Where program execution starts,
 * Prints arguments received
 * @argc: number of cmd line arguments
 * @argv: vector of C arrays
 * Return: Always 0, on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
