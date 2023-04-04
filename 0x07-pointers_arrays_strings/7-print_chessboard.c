#include <stdio.h>

/*
* This function takes in a 2D array of characters and prints out a chessboard.
*
* @param a    A pointer to an array of characters that represents the chessboard.
*             It must have a size of 8x8.
*/
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
