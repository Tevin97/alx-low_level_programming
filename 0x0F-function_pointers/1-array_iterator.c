#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Executes a function on each element of an array
 *
 * @array: Array to be iterated over
 * @size: Size of the array
 * @action: Function pointer to be executed on each element of the array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
