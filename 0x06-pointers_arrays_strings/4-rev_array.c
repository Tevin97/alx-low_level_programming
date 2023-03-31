#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers
 *
 * @a: Pointer to the array
 * @n: Number of elements in the array
 *
 * Description:
 * This function takes an array of integers and its size and reverses the order
 * of the elements in the array.
 */
void reverse_array(int *a, int n)
{
	int r;
	int i;

	for (i = 0; i < n--; i++)
	{
		r = a[i];
		a[i] = a[n];
		a[n] = r;
	}
}
