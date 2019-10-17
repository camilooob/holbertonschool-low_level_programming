#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - creates an array of integers.
 * @b: input.
 * Return: Output.
 */
void *malloc_checked(unsigned int b)
{
	void *c = malloc(b);
	if (c = NULL)
	{
		exit(98);
	}
}
