#include "holberton.h"
/**
* print_alphabet - prints alphabet in lowercase
* @void: no argument
**/
void print_alphabet(void)
{
char letra;
for (letra = 'a'; letra <= 'z'; letra++)
_putchar(letra);
_putchar('\n');
}
