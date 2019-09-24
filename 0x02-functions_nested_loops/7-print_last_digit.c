#include "holberton.h"
/**
* print_last_digit - prints the last digit of a number
* @n: the number to be checker
* Return: 0 for uppercase, 1 for lowercase
*/
int print_last_digit(int n)
{
int last;
last = (n % 10);
if (last < 0)
last = -last;
_putchar('0' + last);
return (last);
}
