#include "holberton.h"
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
	int mult = 1;
	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mult = atoi(argv[i]) * mult;
		}
		printf("%d\n", mult);
	}
	else
	{
		printf("%s\n", "Error");
	}
	return (0);
}
