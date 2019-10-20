#include <stdio.h>

/**
 * print_buffer - Prints a buffer with an
 * hexadecimal format
 * @b: buffer to print
 * @size: Size of the buffer
 *
 */
void print_buffer(char *b, int size)
{
	int i;
	int j;
	int r;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		r = (i / 10 == size / 10) ? size % 10 : 10;

		for (j = 0; j < r; j++)
		{
			if (!(j % 2))
				printf("%02x", b[i + j]);
			else
				printf("%02x ", b[i + j]);
		}
		for (; j < 10; j++)
		{
			if (!(j % 2))
				printf("  ");
			else
				printf("   ");
		}
		for (j = 0; j < r; j++)
			printf("%c", b[i + j] < 32 ? '.' : b[i + j]);

		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
