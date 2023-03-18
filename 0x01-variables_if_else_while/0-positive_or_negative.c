#include <stdlib.h>
#include <time.h>
/**
 *main - program assigns a random number to the variable n
 *Return: 0 when the program runs sucessfully
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		print("is positive");
	}
	else if (n == 0)
	{
		print("is zero");
	}
	else
	{
		print("is negative");
	}
	return (0);
}
