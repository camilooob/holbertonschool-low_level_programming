#include "holberton.h"
/**
 ** more_numbers - print numbers 1 to 14
** Return: no return
**
**/
void more_numbers(void)
{
int i = 0;
int x = 0;
int u1 = 0;
int u2 = 0;
for (x = 1; x <= 10; x++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
u1 = i / 10;
_putchar('0' + u1);
}
u2 = i % 10;
_putchar('0' + u2);
}
_putchar('\n');
}
}
