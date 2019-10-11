#include "holberton.h"

/**
 * _strchr - search into "s" upto find "c", then gives the addres
 * where was found
 * @s: string input
 * @c: char to search
 *
 *
 * Return: address where is the char into string if not found,
 * then return 'NULL'
 * On error: -1 inapropiate entry
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		if (s[i + 1] == c)
			return (s + i + 1);
		i++;
	}

	return (0);
}
