#include "holberton.h"


int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set = 1;

	if ((sizeof(unsigned long int) * 8) - 1 < index)
		return (-1);

	set <<= index;
	*n &= ~set;

	return (1);
}
