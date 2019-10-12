#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function for mynameis.
 *@argc: integer.
 *@argv: character.
 * Return: 0 Always.
 */
int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("%i, sum");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] > 48 && *argv[i] < 57)
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
}
