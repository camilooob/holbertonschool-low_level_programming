#include "holberton.h"
/**
* print_triangle - check the code for Holberton School students.
*@size: integer.
* Return: Void.
*/
void print_triangle(int size)
{
	if (size > 0)
	{
	int i;
	int x;
	int r;
	int res;
		for (i = size; i > 0; i--)
		{
			for (x = 0; x <= size; x++)
			{
			_putchar (' ');
				if (x == size)
				{
				res = size - i;
				for (r = 0; r < res; r++)
				{
				_putchar('#');
				}
				}
			}
			size--;
		_putchar ('\n');
		}
_putchar('\n');
}
}
