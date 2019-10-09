#include "holberton.h"
/**
 * _root - Returns the square root of a number
 * @base: First input.
 * @root: Second input.
 *
 * Description: Returns the square root.
 * Return: Square root
 */
int _root(int base, int root)
{
	if (base == root * root)
	{
		return(root);
	}
	else if (base < root * root)
	{
		return (-1);
	}
		return (_root(base, root + 1));
	
}
/**
 * _sqrt_recursion - Print my number for sqrt.
 * @n: for search her sqrt.
 * Return: The number.
 */
int _sqrt_recursion(int n)
{
	return (_root(n, 1 ));
}

