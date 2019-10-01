#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - a function that prints a string
 * @s: input string
 */

void rev_string(char *s)
{
	int i;
	int largo;
	int rev;

	rev = 0;
	largo = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		largo++;
	}
	for (i = 0; i < largo; i++)
	{
		rev = s[i];
		s[i] = s[largo - 1];
		s[largo - 1] = rev;
		largo--;
	}

}
