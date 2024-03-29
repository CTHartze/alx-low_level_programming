#include "search_algos.h"

/**
 * linear_search - Searches for value in array of integers,
 * using the Linear search algorithm
 *
 * @array: pointer to input array
 * @size: pointer to array size
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
