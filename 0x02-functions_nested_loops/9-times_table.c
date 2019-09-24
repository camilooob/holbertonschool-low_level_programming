#include "holberton.h"
void times_table(void)
{
int fila, columna, resultado, resultado1, resultado2;
for (fila = 0; fila <= 9; fila++)
{
for (columna = 0; columna <= 9; columna++)
{
resultado =  fila * columna;
resultado1 = resultado / 10;
resultado2 = resultado % 10;
if (columna < 9)
{
if (resultado <= 9)
{
_putchar(' ');
_putchar(' ');
_putchar('0' + resultado2);
_putchar(',');
}
else
{
_putchar(' ');
_putchar('0' + resultado1);
_putchar('0' + resultado2);
_putchar(',');
}
}
else
{
if (resultado <= 9)
{
_putchar(' ');
_putchar(' ');
_putchar('0' + resultado2);
}
else
{
_putchar(' ');
_putchar('0' + resultado1);
_putchar('0' + resultado2);
}
_putchar('\n');
}
}
}
}
