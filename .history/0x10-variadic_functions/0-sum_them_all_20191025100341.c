#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all numbers.
 * @n: input number.
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
    int i = 0;

    va_start(ap, n);
    for (; n; n--)
        i += va_arg(ap, int);
    va_end(ap);
    return i;
}
