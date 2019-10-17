#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - len of my big array.
 * @str: My string
 * Return: My len.
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
/**
 * argstostr - argc and argv.
 * @ac: Inputs.
 * @av: Inputs..
 * Return: pointer of string.
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int i, sum, t1, t2;

	if (ac == 0 || av == NULL)
		return (NULL);
	sum = 0;
	for (i = 0; i < ac; i++)
	{
		sum = sum + _strlen(av[i]);
	}
	a = malloc((sum + ac + 1) * sizeof(char));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	sum = 0;
	for (t1 = 0; t1 < ac; t1++)
	{
		for (t2 = 0; av[t1][t2] != '\0'; t2++)
		{
			a[sum] = av[t1][t2];
			sum++;
		}
		a[sum] = '\n';
		sum++;
	}
	return (a);
}
