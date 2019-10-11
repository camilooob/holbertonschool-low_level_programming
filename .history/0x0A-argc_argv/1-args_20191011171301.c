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
	int a = argc - 1;
	(void)argv;
	printf("%d\n", a);
	return (0);
}
