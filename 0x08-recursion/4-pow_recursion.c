#include "main.h"

/**
 * _pow_recursion - Return x value raised to power of y.
 * @x: refers value to raise
 * @y: power pointer
 * Return: power result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
