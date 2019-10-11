#include "holberton.h"
/**
 * _memcpy - prints buffer in hexa
 * @dest: output
 * @src: source
 * @n: integer
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
i = 0;
	while (i < n)
{
	dest[i] = src[i];
	i++;
}
return (dest);
}
