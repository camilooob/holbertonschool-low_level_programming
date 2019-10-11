#include "holberton.h"

/**
 * _strstr - Write a function that locates a substring
 * @haystack: input.
 * @needle: output.
 * Return: haystack + 1.
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
			return (haystack + i);
		}
		i++;
	}

	return (0);
}
