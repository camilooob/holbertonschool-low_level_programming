#include "holberton.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array
 * of integers, followed by a new line.
 * @a: input pointer of an array
 * @n: input array
 */

void print_array(int *a, int n)
{
	int contador;

	if (n > 0)
		for (contador = 0; contador < n; contador++)
		{
			printf("%d", a[contador]);
			if (contador < n - 1)
				printf(", ");
		}
	printf("\n");
}
