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
	int i;
	int mult = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mult = atoi(argv[i]) * atoi(argv[i - 1]);
		}
		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
}
