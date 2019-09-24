#include "holberton.h"
/**
* print_alphabet_x10 - prints the alphabet in lowercase 10 times
* @void - no argument
*/
void print_alphabet_x10(void)
{
char letra;
int i;
for (i = 1; i <= 10; i++)
{
for (letra = 'a'; letra <= 'z'; letra++)
_putchar(letra);
_putchar('\n');
}
}
