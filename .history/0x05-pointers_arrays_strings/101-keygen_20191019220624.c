#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s = 2772;
	int x;

	srand(time(0));
	while (x)
	{
		x = rand() % 100;
		if (x <= 94)
			x += 32;
		else
			continue;

		if (s - x == 0)
		{
			s -= x;
			printf("%c", x);
		}
		else if (s - x - 32 > 0)
		{
			s -= x;
			printf("%c", x);
		}
	}
	return (0);
}
