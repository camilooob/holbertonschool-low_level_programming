#include "holberton.h"
/**
 ** more_numbers - print numbers 1 to 14
** Return: no return
**
**/
void more_numbers(void)
{
int i;
int x;
int u1;
int u2;
for (x = 1; x <= 10; x++)
{
for (i = 0; i <= 14; i++)
{
if(i<=9)
{
_putchar('0' +i);
}
else
{
u1 = i / 10;
u2 = i % 10;
_putchar('0' +u1);
_putchar('0' +u2);
}
}
_putchar('\n');
}
}
