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
	char *org = accept;

	for (; *s; s++)
		for (accept = org; *accept; accept++)
			if (*s == *accept)
				return (s);

	return (0);
}
