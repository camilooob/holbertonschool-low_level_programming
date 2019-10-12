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

	for (i = 1; i < argc; i++)
	{
		mult = atoi(argv[i]) * atoi(argv[i]);
	}
	printf("%d\n", mult);
	return (0);
}
