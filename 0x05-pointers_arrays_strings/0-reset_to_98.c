#include "holberton.h"
/**
 * reset_to_98 - function that takes a pointer to an int
 * as parameter and updates the value it points to to 98
 * @n: input pointer for 0-main.c
 *
 */
void reset_to_98(int *n)
{
	int num = 98;
	*n = num;
}
