#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - len of each elemento of my big array.
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
 * argstostr - reply argc and argv function.
 * @ac: My arguments.
 * @av: My array of arrays.
 * Return: My pointer for my string.
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int i, sum, it1, it2;

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
	for (it1 = 0; it1 < ac; it1++)
	{
		for (it2 = 0; av[it1][it2] != '\0'; it2++)
		{
			a[sum] = av[it1][it2];
			sum++;
		}
		a[sum] = '\n';
		sum++;
	}
	return (a);
}
