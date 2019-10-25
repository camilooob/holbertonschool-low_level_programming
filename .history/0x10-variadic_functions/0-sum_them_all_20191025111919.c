#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all numbers.
 * @n: input number.
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...);
{
va_list ap;
int i = 0;
int x = n;

va_start(ap, n);
for (; x; x--)
{
    printf("%d",va_arg(ap, const unsigned int));
    if ()
}
printf("\n");
va_end(ap);
}
