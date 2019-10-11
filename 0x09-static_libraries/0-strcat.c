#include "holberton.h"
/**
 * _strcat - concatenates two words.
 * @dest: output
 * @src: input
 * Return: x.
 */
char *_strcat(char *dest, char *src)
{
	char *x = dest;

	for (; *dest != '\0' ; dest++)
	{
		;
	}
	for (; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
	}
	*dest = '\0';
	return (x);
}
