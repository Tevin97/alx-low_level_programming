#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;

	for (int i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
	}

	for (int i = 0; i < size; i++)
	{
		sum2 += a[i * size + (size - i - 1)];
	}

	printf("Diagonal 1 sum: %d\n", sum1);
	printf("Diagonal 2 sum: %d\n", sum2);
}
