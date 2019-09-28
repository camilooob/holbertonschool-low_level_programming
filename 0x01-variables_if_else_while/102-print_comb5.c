#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* get LastDigit of random number "n"  and set his position */
	int i = 0;
	int j = 0;
	int calc[2] = {0, 0};
	int digits[4] = {0, 0, 0, 0};

	for (j = 0; j < 100; j++)
	{
		for (i = 0; i < 100; i++)
		{
			if (i != j)
			{
				calc[0] = (j * 100) + i;
				calc[1] = (i * 100) + j;

				digits[0] = j / 10;
				digits[1] = j % 10;
				digits[2] = i / 10;
				digits[3] = i % 10;

				if (calc[0] < calc[1])
				{
					putchar(digits[0] + '0');
					putchar(digits[1] + '0');
					putchar(32);
					putchar(digits[2] + '0');
					putchar(digits[3] + '0');

					if ((i != 99) || (j != 98))
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
