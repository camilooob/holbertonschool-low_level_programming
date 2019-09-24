#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char letra;
int i;
for (i = 0; i <= 10; i++)
{	
for (letra = 'a'; letra <= 'z'; letra++)
_putchar(letra);
_putchar('\n');
}
}
