#include "holberton.h"
/**
 ** print_diagonal - print a diagonal.
 ** @n: input diagonal.
 ** Return: no return.
 **/
void print_diagonal(int n)
{
int diag = 92;
int espacio = 32;
int x;
int i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
for (x = 1; x <= i; x++)
{
if (x < i)
{
_putchar(espacio);
}
else
{
_putchar(diag);
}
}
_putchar('\n');
}
}
}
