#include <stdio.h>

/*
* This function takes in a 2D array of characters and prints out a chessboard.
*
* @param a    A pointer to an array of characters that represents the chessboard.
*             It must have a size of 8x8.
*/
void print_chessboard(char (*a)[8])
{
	int row, int col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
			printf("%c ", a[row][col]);
		printf("\n");
	}
}
