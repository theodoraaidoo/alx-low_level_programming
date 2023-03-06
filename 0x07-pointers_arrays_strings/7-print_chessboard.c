#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int j;
	int k;

	for (j = 0; j < 8; j++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[j][k]);
		_putchar('\n');
	}
}
