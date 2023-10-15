#include "search_algos.h"

/**
 * interpolation_search - Searches a value in a sorted array using \
 * an interpolation search.
 * @array: The array to search in.
 * @size: The length of the array.
 * @value: The value to look for.
 *
 * Return: The first index of the value in the array, otherwise -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t index_low = 0, i_high = size - 1, index = 0;
	double tmp;

	if (!array)
		return (-1);
	while (array[i_high] != array[index_low])
	{
		tmp = (double)(i_high - index_low) / (array[i_high] - array[index_low]);
		index = index_low + (tmp * (value - array[index_low]));
		if (index >= size)
		{
			printf("Value checked array[%d] is out of range\n", (int)index);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", (int)index, array[index]);
		if (array[index] == value)
			return (index);
		else if (array[index] < value)
			index_low = index + 1;
		else
			i_high = index - 1;
	}
	return (value == array[index_low] ? (int)index_low : -1);
}
