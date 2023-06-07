#include "main.h"

/**
 * factorial - Return factorial of number (n!)
 * @n: refers number to return factorial from
 * Return: n factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
