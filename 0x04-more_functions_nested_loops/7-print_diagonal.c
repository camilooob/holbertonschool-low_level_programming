#include "holberton.h"
/**
 ** print_diagonal - print a diagonal.
 ** @n: diagonal
 ** Return: Always 0.
 **/
void print_diagonal(int n)
{
int diag = 92;
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
_putchar(42);
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

