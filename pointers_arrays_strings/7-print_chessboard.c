#include "main.h"

/**
* print_chessboard - Function that prints the chessboard
* @a: String with the chess board
* Return: 0
*/
void print_chessboard(char (*a)[8])
{
	int charc1, charc2;

	for (charc1 = 0; a[charc1][7]; charc1++)
	{
		for (charc2 = 0; charc2 < 8; charc2++)
			_putchar(a[charc1][charc2]);

		_putchar('\n');
	}
}
