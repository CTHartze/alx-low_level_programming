#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - Determines if integer is a prime number
 * @n: refers number to evaluate
 * Return: 1 when n is prime number, else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Determines if number is prime recursively.
 * @n: refers number to evaluate
 * @i: iterator pointer
 * Return: 1 when n is prime, else 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
