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
	while (*s && !(*s == c))
		s++;

	return ((*s == c) ? s : 0);
}
