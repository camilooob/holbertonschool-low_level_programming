
#include "holberton.h"
/**
 ** *leet - put 1 when is a uppercase
 ** @s: takes in an integer
 ** Return: 1 if is uppercase and 0 if is lowcase
 **/
char *leet(char *s)
{
	int len;
	int i;
	char let[10] = "aAeEoOtTlL";
	char num[10] = "4433007711";

	for (len = 0; s[len] != '\0'; len++)
	{
		for (i = 0; let[i] != '\0'; i++)
		{
			if (s[len] == let[i])
			{
				s[len] = num[i];
			}
		}
	}
	return (s);
}
