
#include "holberton.h"
/**
 ** *rot13 - put 1 when is a uppercase
 ** @s: takes in an integer
 ** Return: 1 if is uppercase and 0 if is lowcase
 **/
char *rot13(char *s)
{
	int len;
	int i;
	char input[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (len = 0; s[len] != '\0'; len++)
	{
		for (i = 0; input[i] != '\0'; i++)
		{
			if (s[len] == input[i])
			{
				s[len] = output[i];
				break;
			}
		}
	}
	return (s);
}
