#include "holberton.h"
/**
 ** *string_toupper - put 1 when is a uppercase
 ** @s: takes in an integer
 ** Return: 1 if is uppercase and 0 if is lowcase
 **/
char *string_toupper(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 97 && s[i] <= 122)
{
s[i] = s[i] - 32;
}
}
return (s);
}
