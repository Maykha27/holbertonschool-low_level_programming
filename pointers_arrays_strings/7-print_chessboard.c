#include"main.h"
/**
  * print_chessboard - the function finds the first
  * @a: array of pieces
  * Retenu:
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (b = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}
		_putchar('\n');
	}
}

