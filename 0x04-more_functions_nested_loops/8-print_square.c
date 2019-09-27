/**
 ** print_square - print a diagonal.
 ** @size: input diagonal.
 ** Return: no return.
 **/
#include "holberton.h"
void print_square(int size)
{
int columna;
int fila;
int numeral = 35;
for (columna = 1; columna <= size; columna++)
{
for (fila = 1; fila <= size; fila++)
{
_putchar(numeral);
}
_putchar('\n');
}
}
