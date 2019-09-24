#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day, starting from 00:00 to 23:59.
 *
 * Return: no return.
 */
void jack_bauer(void)
{
int horas;
int minutos;
int h1;
int h2;
int m1;
int m2;
for (horas = 0; horas <= 23; horas++)
{
for (minutos = 0; minutos <= 59; minutos++)
{
h1 = horas / 10;
h2 = horas % 10;
m1 = minutos / 10;
m2 = minutos % 10;
_putchar('0' + h1);
_putchar('0' + h2);
_putchar(':');
_putchar('0' + m1);
_putchar('0' + m2);
_putchar('\n');
}
}
}
