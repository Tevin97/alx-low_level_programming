#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long n = 612852475143;
	unsigned long largest;

	while (n % 2 == 0) /* Divide by 2 as many times as possible */
		n /= 2;

	if (n == 1) /* If the number is a power of 2, return 2 */
	{
		largest = 2;
	}
	else
	{
		unsigned long i = 3;

		while (i * i <= n) /* Check odd divisors up to the square root of n */
		{
			if (n % i == 0)
			{
				largest = i;
				n /= i;

				while (n % i == 0) /* Divide by i as many times as possible */
					n /= i;
			}
			else
			{
				i += 2; /* Move on to the next odd number */
			}
		}

		if (n > 1) /* If n is not 1, then the last factor is greater than sqrt(n) */
			largest = n;
	}

	printf("%lu\n", largest);
	return (0);
}
