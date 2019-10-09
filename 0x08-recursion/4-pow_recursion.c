#include "holberton.h"
/**
 * _pow_recursion - Print factorial.
 * @x: Input.
 * @y: Input.
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x = x * _pow_recursion(x, y - 1));
}
