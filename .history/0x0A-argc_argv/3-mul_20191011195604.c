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
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		sum = atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
