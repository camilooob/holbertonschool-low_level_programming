
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
	int mult = 0;

	if (i == 0)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mult = atoi(argv[i]) * atoi(argv[i - 1]);
		}
		printf("%d\n", mult);
		return (0);
	}
}
