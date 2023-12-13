#include "search_algos.h"

/**
  * _binary_search - Searches for value in sorted array of integers,
  * using binary search
  * @array: pointer to first array element to search
  * @left: starting index of [sub]array to search
  * @right: ending index of [sub]array to search
  * @value: pointer to value to search for
  *
  * Return: -1 if value is not present or the array is NULL,
  * else the index where the value is located.
  *
  * Description: Prints [sub]array being searched after each change.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
  * exponential_search - Searches for value in sorted array of integers,
  * using exponential search
  * @array: pointer to first array element to search
  * @size: pointer to number of elements in the array
  * @value: pointer to value to search for
  *
  * Return: -1 if value is not present or the array is NULL,
  * else the index where the value is located.
  *
  * Description: Prints a value every time it's compared in the array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
