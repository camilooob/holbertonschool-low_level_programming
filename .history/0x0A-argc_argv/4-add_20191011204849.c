#include <stdlib.h>
#include <stdio.h>
/**
 * main - main fun.
 * @argc: argc.
 * @argv: argv.
 * Return: O.
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int sum = 0;
	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] > 48 && *argv[i] < 57)
			{
				for (j = 1; j < argc; j++)
				{

					sum += atoi(argv[j]);
				}
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
}
