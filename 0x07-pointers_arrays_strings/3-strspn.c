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
	unsigned int cnt = 0;
	char *org = accept;
	unsigned int i = 0;

	for (; *s && cnt == i; s++, i++)
		for (accept = org; *accept; accept++)
			if (*s == *accept)
				cnt++;

	return (cnt);
}
