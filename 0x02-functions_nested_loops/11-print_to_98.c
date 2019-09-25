#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: the number that start to print
 * Return: no return
 */
void print_to_98(int n)
{
int contador = 0;
while (contador == 0)
{
printf("%d", n);
if (n == 98)
{
contador = 1;
}
else
{
printf(", ");
}
if (n > 98)
{
n--;
}
else
{
n++;
}
}
printf("\n");
}
