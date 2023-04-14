#include <stdlib.h>
#include "main.h"

/**
 * array_range - create an array of integers.
 *
 * @min: The minimum integer value to include in the array.
 * @max: The maximum integer value to include in the array.
 *
 * Return: On success, a pointer to the newly created array. Otherwise, NULL.
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
