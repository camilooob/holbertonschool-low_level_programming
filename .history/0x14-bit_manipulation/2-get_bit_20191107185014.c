#include "holberton.h"

/**
 * get_bit - get the bit in a position.
 * @n: My number.
 * @index: The bit that I want.
 * Return: The bit in this position.
 */

int get_bit(unsigned long int n, unsigned int index)
{

	if (sizeof(unsigned long int) * 8 < index)
	{
		return (-1);
	}
	n  >>= index;
	if (n & 1)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
