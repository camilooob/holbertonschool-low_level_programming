#include "holberton.h"
/**
** print_line - print lines until n
** @n: input value
** Return: no return
**
**/
void print_line(int n)
{
int linea = 95;
int i;
for (i = 1; i <= n; i++)
{
_putchar(linea);
}
_putchar('\n');
}
