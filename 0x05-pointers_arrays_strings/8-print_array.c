#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: integer array
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	if (n > 0)
	{
		printf("%d", a[0]);
		for (int i = 1; i < n; i++)
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
