#include "holberton.h"
/**
 * print_triangle - print a triangle
 *
 * @size: how big is the triangle
 * Return: 0 TO SUCCESS
 */
void print_triangle(int size)
{
	int nume, space;

	if (size <= 0)
	{
		_putchar(10);
	}
	for (nume = 0; nume < size; nume++)
	{
		for (space = 0; space < size; space++)
		{
			if (space < (size - (nume + 1)))
			{
				_putchar(32);
			}
			else
			{
				_putchar(35);
			}
		}
		_putchar(10);
	}
}
