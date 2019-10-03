#include "holberton.h"
/**
 * _strcmp - concatenates two words.
 * @s1: output
 * @s2: input
 * Return: x
 */
int _strcmp(char *s1, char *s2)
{
for (int i = 0; ; i++)
{
if (*s1 != *s2)
{
return (*s1 < *s2 ? (*s1 - *s2) : (*s1 - *s2));
}
if (*s1 == *s1)
{
return (0);
}
}
}
