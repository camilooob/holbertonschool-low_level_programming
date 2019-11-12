#include "holberton.h"


int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int start = 1;

	if ((sizeof(unsigned long int) * 8) - 1 < index)
	{
		return (-1);
	}
	start <<= index;
	*n &= ~start;

	return (1);
}
