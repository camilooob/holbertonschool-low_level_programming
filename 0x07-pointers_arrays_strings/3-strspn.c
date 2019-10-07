#include "holberton.h"

/**
 * _strspn - search into "s" from start, to end or to dont
 * find any match char with "accept", then gives 0
 * @s: string input
 * @accept: char letters consecutive to search
 *
 *
 * Return: number of occurrences
 * On error: -1 inapropiate entry
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int i = 0, b;

	while (s[i])
	{
		b = 0;
		while (accept[b])
		{
			if (s[i] == accept[b])
			{
				a++;
				break;
			}
			b++;
		}
		if (!accept[b])
			break;
		i++;
	}

	return (a);

}
