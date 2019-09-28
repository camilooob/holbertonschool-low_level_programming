#include <stdio.h>
/**
 * main - This print firts 100 Fibonacci numbers
 * @void: The evaluated input
 *
 * Description: Prints the 100 first Fibonacci numbers
 * Return: 0 Value if it works
 */
int main(void)
{
	unsigned long int w = 0, x = 0, y = 1, z;
	unsigned long int x1, x2, y1, y2, z1, z2;

	while (w < 92)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%lu, ", z);
		w++;
	}
		x1 = x / 10000000000;
		x2 = x % 10000000000;
		y1 = y / 10000000000;
		y2 = y % 10000000000;
	while (w < 98)
	{
		z1 = x1 + y1;
		z2 = x2 + y2;
		if (z2 > 10000000000)
		{
			z1 = z1 + 1;
			z2 = z2 % 10000000000;
		}
		if (w < 97)
		{
			printf("%lu%lu, ", z1, z2);
			x1 = y1;
			x2 = y2;
			y1 = z1;
			y2 = z2;
		}
		else
		{
			printf("%lu%lu\n", z1, z2);
		}
		w++;
	}
	return (0);
}
