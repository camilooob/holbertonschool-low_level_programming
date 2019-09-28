#include <stdio.h>
/**
 * main - This print all multiples of 5 and 3 of 1024
 * @void: The evaluated input
 *
 * Description: computes & prints the sum of all the multiples of 3, 5 of  1024
 * Return: 0 Value if it works
 */
int main(void)
{
	long int x = 0, y = 1, z, w;

	for (w = 0; w < 50; w++)
	{
		z = x + y;
		x = y;
		y = z;
		if (w < 49)
			printf("%li, ", z);
		else
			printf("%li\n", z);
	}
	return (0);
}
