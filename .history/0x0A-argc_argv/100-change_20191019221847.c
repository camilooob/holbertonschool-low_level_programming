#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of application. Returns the number of coins
 * in 25, 10, 5, 2 and 1 needed to make the change of an amount of money.
 * @argc: Number of arguments to the main function
 * @argv: Array with the arguments to the main function
 *
 * Return: 0 if can make the change (Success).
 * 1 if does have more than 1 parameter.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents >= 0)
	{
		sum += cents / 25;
		cents %= 25;
		sum += cents / 10;
		cents %= 10;
		sum += cents / 5;
		cents %= 5;
		sum += cents / 2;
		cents %= 2;
		sum += cents;
	}
	printf("%d\n", sum);
	return (0);
}
