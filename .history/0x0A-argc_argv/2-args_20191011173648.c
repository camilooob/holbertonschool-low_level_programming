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

	(void)argv;
	for (i = i; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
