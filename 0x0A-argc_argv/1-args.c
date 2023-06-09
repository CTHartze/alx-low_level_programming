#include <stdio.h>
#include "main.h"

/**
 * main - Where program execution starts.
 * @argc: number of cmd line arguments
 * @argv: vector of C arrays
 * Return: Always 0, on success
 */
int main(int argc, char *argv[])
{
(void) argv; /*Disregard argv*/
	printf("%d\n", argc - 1);

	return (0);
}
