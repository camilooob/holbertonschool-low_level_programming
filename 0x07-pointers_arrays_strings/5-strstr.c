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

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i])
	{
		j = 0;
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
				j++;
			
		}
		if (!needle[j])
		{
			return(haystack + i);
		}
		i++;
	}

	return (0);
}
