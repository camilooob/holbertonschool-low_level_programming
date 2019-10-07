#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the diagonals
 * of a square matrix
 * @a: Pointer to a matrix
 * @size: Matrix size
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	long int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += *(a + i * size + j);
			if (i == (size - 1) - j)
				sum2 += *(a + i * size + j);
		}
	}
	printf("%li, %li\n", sum1, sum2);
}
