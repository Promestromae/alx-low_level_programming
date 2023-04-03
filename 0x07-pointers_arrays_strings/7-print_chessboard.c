#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: two dimension array to print
 */
void print_chessboard(char (*a)[8])
{
	int f, g;

	for (f = 0; f < 8; f++)
	{
		for (g = 0; g < 8; g++)
		{
			_putchar(a[f][g]);
		}
		_putchar('\n');
	}
}
