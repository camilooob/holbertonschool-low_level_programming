#include "holberton.h"
/**
 ** more_numbers - print numbers 1 to 14
** Return: no return
**
**/
void more_numbers(void)
{
int i;
int u;
int x;
for (x = 1; x <= 10; x++)
{
for (i = '0'; i <= '9'; i++)
{
_putchar(i);
}
for (u = '0'; u <= '4'; u++)
{
_putchar('1');
_putchar(u);
}
_putchar('\n');
}
}
