#include "holberton.h"
#include <stdio.h>
/**
 * print_chessboard - Prints the chessboard
 * @a: pointer to a row of the chessboard
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	int size = sizeof(*a) / sizeof(char);
	char r;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			r = (*(a + i))[j];
			_putchar(r);
		}
		_putchar('\n');
	}
}
