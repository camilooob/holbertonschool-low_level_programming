#include "holberton.h"
/**
 * print_triangle - print a triangle
 *
 * @size: how big is the triangle
 * Return: 0 TO SUCCESS
 */
void print_triangle(int size)
{
	int filas, columnas;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (filas = 0; filas < size; filas++)
	{
		for (columnas = 0; columnas < size; columnas++)
		{
			if (columnas < (size - (filas + 1)))
			{
				_putchar(32);
			}
			else
			{
				_putchar(35);
			}
		}
		_putchar('\n');
	}
}
