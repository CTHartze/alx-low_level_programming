#include "3-calc.h"

/**
 * op_add - Sum of numbers.
 * @a: refers to first number
 * @b: refers to second number
 * Return: The result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Difference of numbers.
 * @a: refers to first number
 * @b: refers to second number
 * Return: The result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Product of numbers.
 * @a: refers to first number
 * @b: refers to second number
 * Return: The result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division of numbers.
 * @a: dividend pointer
 * @b: divisor pointer
 * Return: The result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns division remainder of numbers.
 * @a: dividend pointer
 * @b: divisor pointer
 * Return: remainder of the division.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
