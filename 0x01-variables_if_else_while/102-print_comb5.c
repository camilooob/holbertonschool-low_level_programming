#include <stdio.h>
/**
 * main - Accept empty value
 * write - Screen information
 * @void: Description of a empty parameter
 *
 * Description: This sort number from 00 01 to 98 99
 * Return: 0 Value if it works
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 100; x++)
	{
		for (y = 0; y < 100; y++)
		{
			if (x < y && x != y)
			{
				putchar((x / 10) + '0');
				putchar((x % 10) + '0');
				putchar(' ');
				putchar((y / 10) + '0');
				putchar((y % 10) + '0');
				if (!(x == 98 && y == 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}}
