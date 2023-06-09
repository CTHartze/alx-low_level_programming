#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Returns natural square root number.
 * @n: refers number to calculate square root of
 * Return: square root result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - Recurses to return the
 * natural square root number.
 * @n: refers number to calculate square root of
 * @i: iterator pointer
 * Return: square root result
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
