#include "holberton.h"
/**
 * _strncat - concatenates two words.
 * @dest: output
 * @src: input
 * @n: lent;
 * Return: x.
 */
char *_strncat(char *dest, char *src, int n)
{
char *x = dest;
int largo = 0;
int dest_len = largo;
int i;
for (; *dest != '\0' ; dest++)
{
largo++;
}
for (i = 0 ; i < n && src[i] != '\0' ; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';
return (x);
}
