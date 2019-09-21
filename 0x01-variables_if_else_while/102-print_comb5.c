#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{/*main*/
int i, j, k, l;
for (i = 48 ; i < 58 ; i++)
{
for (j = 48 ; j < 58 ; j++)
{
for (k = 48 ; k < 58 ; k++)
{
for (l = 48 ; l < 58 ; l++)
{
if (k >= i)
{
putchar(i);
putchar(j);
putchar(32);
putchar(k);
putchar(l);
if ((i == 57) & (j == 56) & (k == 57) & (l == 57))
{
break;
}
putchar(44);
putchar(32);
} /*if ((i == 57)...*/
} /*for*/
} /*for*/
} /*for*/
} /*for*/
putchar(10);
return (0);
} /*main*/
