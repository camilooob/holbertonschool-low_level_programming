
#include "holberton.h"
/**
 ** *cap_string - put 1 when is a uppercase
 ** @s: takes in an integer
 ** Return: 1 if is uppercase and 0 if is lowcase
 **/
char *cap_string(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if ((i == 0) && (s[i] >= 'a' && s[i] <= 'z'))
{
s[i] = s[i] - 32;
}
if ((s[i] == ' ' || s[i] == ',' || s[i] == ';' ||
	s[i] == '.' || s[i] == '!' || s[i] == '?' ||
	s[i] == '"' || s[i] == '(' || s[i] == ')' ||
	s[i] == '{' || s[i] == '}' || s[i] == '\n')
	&& (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
{
s[i + 1] = s[i + 1] - 32;
}
else if (s[i] == '\t' && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
{
s[i] = s[i] + 23;
s[i + 1] = s[i + 1] - 32;
}
}
return (s);
}
