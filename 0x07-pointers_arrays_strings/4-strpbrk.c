#include "holberton.h"

/**
 * _strpbrk - search into "s" from start, to end or to
 * find any match char with "accept"
 * @s: string input
 * @accept: char letters to search
 *
 *
 * Return: address where char was found, null is doesnt
 * On error: -1 inapropiate entry
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}

	return (0);
}
