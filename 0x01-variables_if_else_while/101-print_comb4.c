#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k;
for (i = 48 ; i < 58 ; i++)
{
for (j = 48 ; j < 58 ; j++)
{
for (k = 48 ; k < 58 ; k++)
if ((i < j) && (j < k) && (i < k) && (i != j) && (j != k) && (i != k))
{
putchar(i);
putchar(j);
putchar(k);
if ((i == 55) && (j == 56) && (k == 57))
{
break;
}
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
