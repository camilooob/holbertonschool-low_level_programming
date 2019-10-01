#include "holberton.h"
/**
 * puts_half - a function that prints one char out of 2
 * of a string, followed by a new line.
 * @str: input string
 */
void puts_half(char *str)
{
int i;
int largo;
largo = 0;
for (i = 0; str[i] != '\0'; i++)
{
largo++;
}
if (largo % 2 != 0)
{
for (i = (largo / 2) + 1; i < largo; i++)
{
_putchar(str[i]);
}
}
else
for (i = largo / 2; i < largo; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
